<template>
  <Person v-if="isShow"></Person>

</template>
<style scoped></style>
<script setup lang="ts" name="App">
import { ref } from 'vue';
import { onMounted } from 'vue';
import Person from './components/Person.vue';
//挂载完毕
onMounted(() => {
  console.log("父-----挂载完毕");
})
let isShow = ref(true)
</script>