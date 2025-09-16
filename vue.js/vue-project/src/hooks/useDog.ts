import { ref } from 'vue';
import axios from 'axios'

export default function () {
    let dogList = ref([
        'https://images.dog.ceo//breeds//pembroke//n02113023_3509.jpg'
    ])

    async function Again() {
        try {
            let result = await axios.get('https://dog.ceo/api/breed/pembroke/images/random')
            console.log(result.data.message);
            let dog = result.data.message
            dogList.value.push(dog)
        } catch (error) {
            alert(error)
        }

    }
    //这个暴露的函数得向外界提供东西
    return { dogList, Again }
}

