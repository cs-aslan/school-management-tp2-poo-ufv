#include "MainViewer.hpp"

std::string view::main::mainMenu()
{
    return view::aux::separator() +
            "Bem-vindo ao sistema de gerenciamento escolar! O que deseja fazer?\n" +
            "1- Gerenciar alunos\n" +
            "2- Gerenciar professores\n" +
            "3- Gerenciar turmas\n" +
            "9- Sair\n" +
            view::aux::separator();
}

std::string view::main::reShowMenu()
{
    return "Digite 0 para mostrar novamente o menu.\n";
}