<template>
    <div class="car">
        <h2>一辆{{ car.brand }}价值{{ car.price }}</h2>
        <button @click="ChPrice">改价格</button>
    </div>
</template>

<script setup lang="ts">
import { ref } from 'vue';
let car = ref({ brand: "奔驰", price: 100 });

function ChPrice() {
    car.value.price += 10;
}
</script>
<style>
.car {
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