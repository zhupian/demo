<template>
    <div class="person">

    </div>
</template>

<script setup lang="ts">
import { type PersonInter, type Persons } from '../types';
//这里加个type是为了和普通的引入的值区分开来(乱的一批)
let person: PersonInter = { id: "sadfjwoefn02", name: "薄姐", age: 12 };
let PersonList: Persons = [
    { id: "sadfjwoefn01", name: "薄姐", age: 12 },
    { id: "sadfjwoefn02", name: "薄雨涵", age: 129 },
    { id: "sadfjwoefn03", name: "薄雨猴", age: 122 }
]
</script>

<style>
.person {
    border: 2px solid #333;
    background-color: aqua;
    padding: 20px;
    margin: 20px;
    border-radius: 8px;
}

button {
    margin: 0 10px;
}
</style>