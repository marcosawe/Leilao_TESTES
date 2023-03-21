#include "catch.hpp"
#include "Usuario.hpp"

TEST_CASE("Usuário deve saber informar seu primeiro nome") {
    Usuario marcos("Marcos Eduarfo");

    std::string primeiroNome = marcos.recuperaPrimeiroNome();

    REQUIRE("Vinicius" == primeiroNome);
}
