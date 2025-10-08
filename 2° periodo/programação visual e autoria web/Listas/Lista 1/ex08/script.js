 function validarCPF(cpf) {
            
            cpf = cpf.replace(/\D/g, '');
            if (cpf.length !== 11) {
                return false;
            }
            if (/^(\d)\1+$/.test(cpf)) {
                return false;
            }
            let soma = 0;
            for (let i = 0; i < 9; i++) {
                soma += parseInt(cpf.charAt(i)) * (10 - i);
            }
            let resto = soma % 11;
            let digito1 = resto < 2 ? 0 : 11 - resto;
            if (digito1 !== parseInt(cpf.charAt(9))) {
                return false;
            }
            soma = 0;
            for (let i = 0; i < 10; i++) {
                soma += parseInt(cpf.charAt(i)) * (11 - i);
            }
            resto = soma % 11;
            let digito2 = resto < 2 ? 0 : 11 - resto;
            if (digito2 !== parseInt(cpf.charAt(10))) {
                return false;
            }
            return true;
        }
        document.getElementById('formCPF').addEventListener('submit', function(event) {
            event.preventDefault();
            
            const cpfInput = document.getElementById('cpf');
            const resultado = document.getElementById('resultado');
            const cpf = cpfInput.value;
            
            if (validarCPF(cpf)) {
                resultado.textContent = 'CPF válido!';
            } else {
                resultado.textContent = 'CPF inválido!';
            }
        });

        document.getElementById('cpf').addEventListener('input', function(event) {
            let cpf = event.target.value.replace(/\D/g, '');
            if (cpf.length > 3) {
                cpf = cpf.substring(0, 3) + '.' + cpf.substring(3);
            }
            if (cpf.length > 7) {
                cpf = cpf.substring(0, 7) + '.' + cpf.substring(7);
            }
            if (cpf.length > 11) {
                cpf = cpf.substring(0, 11) + '-' + cpf.substring(11, 13);
            }
            event.target.value = cpf;
        });