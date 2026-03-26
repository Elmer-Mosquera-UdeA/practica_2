# Guía para Añadir un Nuevo Ejercicio

Sigue estos pasos para mantener el proyecto organizado y bajo control de versiones.

### 1. Preparar el entorno (Git)

Antes de realizar cambios en el código, prepara tu espacio de trabajo. Tienes dos formas de hacerlo:

#### Opción A: Terminal (Línea de comandos)
Crea una rama nueva para trabajar de forma aislada, se muestra ejemplo con ejercicio 6:

```bash
# Crear una rama nueva y cambiarse a ella inmediatamente
git switch -c feature/ejercicio-6
```

#### Opción B: GitHub Desktop (Interfaz Visual)
Si prefieres no usar comandos, sigue estos pasos en la aplicación:
1. En la barra superior, haz clic en **Current Branch**.
2. Selecciona **New Branch**.
3. Nombra la rama como `feature/ejercicio-6` y haz clic en **Create Branch**.

---

### 2. Creación del archivo en el IDE

1. **Click derecho** sobre la carpeta `src`.
2. Selecciona **Añadir nuevo** (Add New...).
3. En el menú izquierdo, elige **C++** y luego **C++ Source File**.
4. Haz click en **Choose...**.
5. **Nombre del archivo:** Escribe el nombre (ejemplo: `ejercicio_6.cpp`).
6. **Ubicación:** Verifica que la ruta sea `practica_2/src`.
7. **Control de versiones:** Asegúrate de que la casilla para añadir a Git esté marcada.
8. Haz click en **Finish**.

---

### 3. Integración del código

Para que el compilador y el menú principal reconozcan el nuevo archivo, realiza lo siguiente:

> [!IMPORTANT]
> **Pasos Obligatorios:**
> * **Cabecera:** Añade el prototipo de la función en `include/enlace.h`.
> * **CMake:** Verifica que el nuevo archivo esté incluido en tu `CMakeLists.txt`

---

### 4. Guardar cambios

Una vez que el ejercicio funcione, guarda tus cambios:

#### Usando la Terminal:
```bash
git add src/ejercicio_6.cpp
git commit -m "Añadido ejercicio 6"
```

#### Usando GitHub Desktop:
1. Verás los archivos modificados en la columna de la izquierda (**Changes**).
2. En el cuadro inferior (Summary), escribe: `Añadido ejercicio 6`.
3. Haz clic en el botón azul **Commit to [nombre-de-tu-rama]**.

### 5. Subir cambios

1. Haz push de la rama
2. Crea un pull request para mezclar con la rama principal
3. Elimina la rama de remoto