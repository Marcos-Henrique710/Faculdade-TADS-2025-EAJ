/*1. Crie uma tabela chamada Curso que tenha os seguintes atributos: codigo, nome,
instituicao, duracao.
a. A tabela deve ter uma chave primária chamada id.
b. Se não for especificada a duração, deve ser atribuído o valor 0 a ela.
c. Codigo, nome e instituicao são atributos obrigatórios.
*/
CREATE TABLE CURSO (
	ID SERIAL PRIMARY KEY,
	CODIGO VARCHAR(7) NOT NULL,
	NOME VARCHAR(100) NOT NULL,
	INSTITUICAO VARCHAR(100) NOT NULL,
	DURACAO INTEGER DEFAULT 0
);

/*
2. Inserir 5 cursos no banco de dados.
a. Inserir 2 cursos com o mesmo nome, mas de instituições diferentes.
b. Inserir um curso com o nome TADS e instituicao UFRN.
c. Inserir um curso com o nome TADS e instituicao IFRN.
*/
INSERT INTO
	CURSO (CODIGO, NOME, INSTITUICAO, DURACAO)
VALUES
	('TADS011', 'TADS', 'UFRN', 6),
	('TADS012', 'TADS', 'IFRN', 6),
	('ENGCOMP', 'Engenharia de Computação', 'UFRN', 9),
	('CIECOMP', 'Ciência de Computação', 'UFRN', 10),
	('BTI0011', 'Tecnologia da Informação', 'UFRN', 7);

/*
3. Crie uma tabela chamada Aluno que tenha os seguintes atributos: nome,
sobrenome, data de nascimento, endereco.
a. A tabela deve ter uma chave primária chamada id.

*/
CREATE TABLE ALUNO (
	ID SERIAL PRIMARY KEY,
	NOME VARCHAR(100),
	SOBRENOME VARCHAR(100),
	DATA_NASCIMENTO DATE,
	ENDERECO VARCHAR(100)
);

/*
4. Inserir 5 alunos no banco de dados.
*/
INSERT INTO
	ALUNO (NOME, SOBRENOME, DATA_NASCIMENTO, ENDERECO)
VALUES
	('Carla', 'Fernandes', '18-12-1988', 'Rua A'),
	('Danilo', 'Curvelo', '09-01-1988', 'Rua A'),
	('Daniel', 'Curvelo', '30-12-1988', 'Rua B'),
	('Alice', 'Curvelo', '19-12-1988', 'Rua B'),
	('Carla', 'Curvelo', '20-12-1988', 'Rua C');

/*5. Alterar a tabela Aluno para inserir o atributo curso
a. O atributo curso é uma chave estrangeira que referencia a tabela curso, e
pode ser um valor nulo.
*/
SELECT
	*
FROM
	ALUNO;

ALTER TABLE ALUNO
ADD COLUMN CURSO INTEGER REFERENCES CURSO (ID);

/*6. Inserir 5 novos alunos no banco de dados
a. Todos os alunos devem estar cursando algum curso.
b. 3 desses alunos devem estar cursando o curso TADS da instituição UFRN.
c. 1 deve estar cursando o TADS do IFRN
*/
INSERT INTO
	ALUNO (NOME, SOBRENOME, DATA_NASCIMENTO, ENDERECO, CURSO)
VALUES
	('Flávia', 'Fernandes', '18-12-1988', 'Rua A', 1),
	('Sarah', 'Curvelo', '09-01-1988', 'Rua A', 1),
	('Guilherme', 'Curvelo', '30-12-1988', 'Rua B', 1),
	('Melissa', 'Curvelo', '19-12-1988', 'Rua B', 2),
	('Gisele', 'Curvelo', '20-12-1988', 'Rua C', 3);

/* 7. Selecionar os nomes de todos os cursos. */
SELECT
	NOME
FROM
	CURSO;

/* 8. Selecionar os nomes dos cursos, sem repetir os nomes. */
SELECT DISTINCT
	NOME
FROM
	CURSO;

/* 9. Selecionar apenas os cursos que tenham uma duração maior do que 6 semestres. */
SELECT
	CODIGO,
	NOME,
	DURACAO
FROM
	CURSOWHERE DURACAO > 6;

/* 10. Selecionar o nome e sobrenome de todos os alunos cadastrados no sistema. */
SELECT
	NOME,
	SOBRENOME
FROM
	ALUNO;

/* 11. Selecionar o nome e sobrenome de todos os alunos que estão matriculados em
algum curso. */
SELECT
	*
FROM
	ALUNO;

SELECT
	A.NOME AS NOME_ALUNO,
	A.SOBRENOME AS SOBRENOME_ALUNO,
	C.NOME AS NOME_CURSO,
	C.INSTITUICAO
FROM
	ALUNO A
	JOIN CURSO C ON A.CURSO = C.ID
	/* 12. Selecionar o nome e sobrenome dos alunos que cursam o curso TADS na UFRN. */
SELECT
	A.NOME,
	A.SOBRENOME
FROM
	ALUNO A
	JOIN CURSO C ON A.CURSO = C.ID
WHERE
	C.NOME = 'TADS'
	AND C.INSTITUICAO = 'UFRN';

/* 13. Selecione o nome e sobrenome de todos os alunos cadastrados no sistema,
mostrando o curso que eles fazem, caso tenham. */
SELECT
	A.NOME AS NOME_ALUNO,
	A.SOBRENOME AS SOBRENOME_ALUNO,
	C.NOME AS NOME_CURSO,
	C.INSTITUICAO
FROM
	ALUNO A
	LEFT JOIN CURSO C ON A.CURSO = C.ID
	/* 14. Busque a aluna com nome Carla Fernandes (pode estar no nome ou sobrenome) e
	altere seus dados para nome=Carla Fernandes, sobrenome=Curvelo */
SELECT
	ID,
	NOME,
	SOBRENOME
FROM
	ALUNO
WHERE
	UPPER(NOME) LIKE '%CARLA%'
	AND UPPER(SOBRENOME) LIKE '%FERNANDES%'
	OR UPPER(NOME) LIKE '%FERNANDES%'
	AND UPPER(SOBRENOME) LIKE '%CARLA%'
	OR UPPER(NOME) LIKE '%FERNANDES%CARLA%'
	OR UPPER(NOME) LIKE '%CARLA%FERNANDES%'
	OR UPPER(SOBRENOME) LIKE '%FERNANDES%CARLA%'
	OR UPPER(SOBRENOME) LIKE '%CARLA%FERNANDES%';

SELECT
	*
FROM
	ALUNO;

UPDATE ALUNO
SET
	NOME = 'Carla Fernandes',
	SOBRENOME = 'Curvelo'
WHERE
	UPPER(NOME) LIKE '%CARLA%'
	AND UPPER(SOBRENOME) LIKE '%FERNANDES%'
	OR UPPER(NOME) LIKE '%FERNANDES%'
	AND UPPER(SOBRENOME) LIKE '%CARLA%'
	OR UPPER(NOME) LIKE '%FERNANDES%CARLA%'
	OR UPPER(NOME) LIKE '%CARLA%FERNANDES%'
	OR UPPER(SOBRENOME) LIKE '%FERNANDES%CARLA%'
	OR UPPER(SOBRENOME) LIKE '%CARLA%FERNANDES%';

/* 15. Delete o aluno chamado Guilherme Curvelo. */
SELECT
	*
FROM
	ALUNO;

DELETE FROM ALUNO
WHERE
	UPPER(NOME) LIKE '%GUILHERME%'
	AND UPPER(SOBRENOME) LIKE '%CURVELO%'
	OR UPPER(NOME) LIKE '%CURVELO%'
	AND UPPER(SOBRENOME) LIKE '%GUILHERME%'
	OR UPPER(NOME) LIKE '%CURVELO%GUILHERME%'
	OR UPPER(NOME) LIKE '%GUILHERME%CURVELO%'
	OR UPPER(SOBRENOME) LIKE '%CURVELO%GUILHERME%'
	OR UPPER(SOBRENOME) LIKE '%GUILHERME%CURVELO%';

/* 16. Selecione os alunos que possuem nome ou sobrenome que contenha o termo 'fern' */
SELECT
	ID,
	NOME,
	SOBRENOME
FROM
	ALUNO
WHERE
	UPPER(NOME) LIKE '%FERN%'
	OR UPPER(SOBRENOME) LIKE '%FERN%';