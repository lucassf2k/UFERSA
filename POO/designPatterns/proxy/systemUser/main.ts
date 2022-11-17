import { Admin } from "./Admin";
import AdminProxy from "./AdminProxy";

async function clientCode(): Promise<void> {
  const user = new Admin();
  console.time();
  console.log('Isso vai levar 2 segundos');
  console.log(await user.getAddresses());

  console.log('criando uma listagem')
  for (let i = 0; i < 5; i++) {
    console.log(await user.getAddresses());
  }
  console.timeEnd();
}

async function clientCodeProxy(): Promise<void> {
  const user = new Admin();

  const userProxy  = new AdminProxy(user);
  console.time();
  console.log('Isso vai levar 2 segundos');
  console.log(await userProxy.getAddresses());

  console.log('criando uma listagem (CHACHE)')
  for (let i = 0; i < 5; i++) {
    console.log(await userProxy.getAddresses());
  }
  console.timeEnd();
}

// clientCode();
clientCodeProxy();
