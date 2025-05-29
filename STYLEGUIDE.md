# Guía de Estilo y Convenciones

## Encabezados de archivos
Cada archivo debe iniciar con un bloque de comentarios con:
- @file: Nombre del archivo
- @brief: Descripción breve
- @author
- @date

## Código
- Clases: CamelCase
- Métodos/Funciones: camelCase
- Variables: camelCase
- Constantes: ALL_CAPS

## Formato
- Indentación: 4 espacios
- Fin de línea: LF
- Longitud de línea: <= 100 caracteres

## Uso de includes
- Usa include guards o #pragma once
- Incluye solo lo necesario

## Documentación
- Cada método público debe documentarse en el header

## Pruebas
- Ubicar tests en carpeta tests/
- Nombres: test_<Clase>.cpp
