import { ISystemUser, SystemUserAddressType } from "./ISystemUser";

export default class AdminProxy implements ISystemUser {
  private realUser: ISystemUser;
  private realUserAddresses: SystemUserAddressType[] | null = null;

  constructor(private user: ISystemUser) {
      this.realUser = user; 
  }

   async getAddresses(): Promise<SystemUserAddressType[]> {

      if (this.realUserAddresses === null) {
        this.realUserAddresses = await this.realUser.getAddresses();
      }

      return  this.realUserAddresses;
  }
}