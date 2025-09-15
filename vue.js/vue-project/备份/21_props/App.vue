<template>
  <Person a="1+1" :b="1 + 1" c="x" :d="x" :list="PersonList"></Person>
  <!-- 这里a就是字符串,b是一个表达式 -->

  <!-- 给person这个组件传了一个值a,a=haha -->
</template>
<style scoped></style>
<script setup lang="ts" name="App">
import { reactive } from 'vue';
import { type PersonInter } from './types';
import Person from './components/Person.vue';
let x = 9;
let PersonList: Array<PersonInter> = reactive([
  { id: "sadfjwoefn01", name: "薄姐", age: 12 },
  { id: "sadfjwoefn02", name: "薄雨涵", age: 129 },
  { id: "sadfjwoefn03", name: "薄雨猴", age: 122 },
])
// let PersonList = reactive<Persons>([])优雅的写法
</script>