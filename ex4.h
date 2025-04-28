

/*
    Copyright © 2025 Mateus Felipe da Silveira Vieira
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>5.
*/

int i = 0;
void reverse_str(char str[], int inicio, int fim){
    if(i == (inicio + fim)  / 2){
        i = 0;
        return;
    }

    char aux = str[inicio];
    str[inicio] = str[fim - 2]; // menos dois por que tem o '/0' terminador
    str[fim - 2] = aux;

    /* printf(" - %s - %d, %d\n", str, inicio, fim); */
    i++;
    reverse_str(str, inicio + 1, fim - 1);
}