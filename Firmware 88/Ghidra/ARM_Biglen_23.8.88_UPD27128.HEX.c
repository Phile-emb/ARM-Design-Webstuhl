typedef unsigned char   undefined;



undefined DAT_ram_8000;
undefined1 DAT_ram_8001;
undefined1 DAT_ram_8002;
undefined1 DAT_io_001c;
char DAT_io_0004;
char DAT_io_0008;
char DAT_io_000c;
undefined DAT_ram_86fe;
byte DAT_io_0018;
undefined1 DAT_io_001d;
undefined1 DAT_ram_8000;
undefined1 DAT_io_0004;
undefined1 DAT_io_0008;
undefined1 DAT_io_000c;
byte DAT_io_001c;
char DAT_io_0018;

// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RST0(void)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  
  DAT_io_001c = 0x11;
  DAT_io_0004 = 0;
  DAT_io_0008 = 0;
  DAT_io_000c = 0;
  cVar1 = -1;
  puVar3 = &DAT_ram_8000;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  cVar1 = '\x1e';
  puVar3 = &DAT_ram_8000;
  do {
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  _DAT_ram_86fe = 0x2a;
  FUN_ram_00f0(0);
  _DAT_ram_86fe = 0x2d;
  FUN_ram_00f0();
  while ((DAT_io_0018 & 0x80) != 0) {
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x3d;
      DAT_io_0004 = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 0x44;
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x4d;
      DAT_io_0008 = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 0x54;
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x5d;
      DAT_io_000c = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 100;
    FUN_ram_00e8();
    cVar1 = '\x03';
    do {
      DAT_io_0004 = 0xff;
      DAT_io_0008 = 0xff;
      DAT_io_000c = 0xff;
      _DAT_ram_86fe = 0x71;
      FUN_ram_0148();
      _DAT_ram_86fe = 0x74;
      FUN_ram_00e8();
      _DAT_ram_86fe = 0x77;
      FUN_ram_0148();
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    _DAT_ram_86fe = 0x7e;
    FUN_ram_00e8();
  }
  do {
    while( true ) {
      _DAT_ram_86fe = 0x84;
      FUN_ram_00e8();
      _DAT_ram_86fe = 0x87;
      cVar1 = FUN_ram_00f0();
      if (cVar1 == '\x02') break;
      _DAT_ram_86fe = 0x8e;
      FUN_ram_011b();
    }
    cVar1 = '\n';
    _DAT_ram_86fe = 0x96;
    DAT_ram_8000 = FUN_ram_0107();
    _DAT_ram_86fe = 0x9e;
    DAT_io_0004 = DAT_ram_8000;
    DAT_ram_8001 = FUN_ram_0107();
    _DAT_ram_86fe = 0xa6;
    DAT_io_0008 = DAT_ram_8001;
    DAT_ram_8002 = FUN_ram_0107();
    DAT_io_000c = DAT_ram_8002;
    while( true ) {
      _DAT_ram_86fe = 0xae;
      FUN_ram_012c();
      _DAT_ram_86fe = 0xb3;
      cVar2 = FUN_ram_011b(DAT_io_001d);
      if (cVar2 == '0') break;
      cVar1 = cVar1 + -1;
      if (cVar1 == '\0') {
        _DAT_ram_86fe = 0xbd;
        FUN_ram_00e8();
        do {
        } while (DAT_io_0018 != 0);
        _DAT_ram_86fe = 199;
        FUN_ram_013c(0);
        do {
          do {
          } while (DAT_io_0018 == 0);
          _DAT_ram_86fe = 0xcf;
          FUN_ram_013c(DAT_io_0018);
        } while (DAT_io_0018 == 0);
        DAT_io_0004 = DAT_ram_8000;
        DAT_io_0008 = DAT_ram_8001;
        DAT_io_000c = DAT_ram_8002;
        cVar1 = '\n';
      }
    }
  } while( true );
}



// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RST1(void)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  
  DAT_io_0004 = 0;
  DAT_io_0008 = 0;
  DAT_io_000c = 0;
  cVar1 = -1;
  puVar3 = &DAT_ram_8000;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  cVar1 = '\x1e';
  puVar3 = &DAT_ram_8000;
  do {
    *puVar3 = 0x30;
    puVar3 = puVar3 + 1;
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  _DAT_ram_86fe = 0x2a;
  FUN_ram_00f0(0);
  _DAT_ram_86fe = 0x2d;
  FUN_ram_00f0();
  while ((DAT_io_0018 & 0x80) != 0) {
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x3d;
      DAT_io_0004 = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 0x44;
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x4d;
      DAT_io_0008 = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 0x54;
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x5d;
      DAT_io_000c = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 100;
    FUN_ram_00e8();
    cVar1 = '\x03';
    do {
      DAT_io_0004 = 0xff;
      DAT_io_0008 = 0xff;
      DAT_io_000c = 0xff;
      _DAT_ram_86fe = 0x71;
      FUN_ram_0148();
      _DAT_ram_86fe = 0x74;
      FUN_ram_00e8();
      _DAT_ram_86fe = 0x77;
      FUN_ram_0148();
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    _DAT_ram_86fe = 0x7e;
    FUN_ram_00e8();
  }
  do {
    while( true ) {
      _DAT_ram_86fe = 0x84;
      FUN_ram_00e8();
      _DAT_ram_86fe = 0x87;
      cVar1 = FUN_ram_00f0();
      if (cVar1 == '\x02') break;
      _DAT_ram_86fe = 0x8e;
      FUN_ram_011b();
    }
    cVar1 = '\n';
    _DAT_ram_86fe = 0x96;
    DAT_ram_8000 = FUN_ram_0107();
    _DAT_ram_86fe = 0x9e;
    DAT_io_0004 = DAT_ram_8000;
    DAT_ram_8001 = FUN_ram_0107();
    _DAT_ram_86fe = 0xa6;
    DAT_io_0008 = DAT_ram_8001;
    DAT_ram_8002 = FUN_ram_0107();
    DAT_io_000c = DAT_ram_8002;
    while( true ) {
      _DAT_ram_86fe = 0xae;
      FUN_ram_012c();
      _DAT_ram_86fe = 0xb3;
      cVar2 = FUN_ram_011b(DAT_io_001d);
      if (cVar2 == '0') break;
      cVar1 = cVar1 + -1;
      if (cVar1 == '\0') {
        _DAT_ram_86fe = 0xbd;
        FUN_ram_00e8();
        do {
        } while (DAT_io_0018 != 0);
        _DAT_ram_86fe = 199;
        FUN_ram_013c(0);
        do {
          do {
          } while (DAT_io_0018 == 0);
          _DAT_ram_86fe = 0xcf;
          FUN_ram_013c(DAT_io_0018);
        } while (DAT_io_0018 == 0);
        DAT_io_0004 = DAT_ram_8000;
        DAT_io_0008 = DAT_ram_8001;
        DAT_io_000c = DAT_ram_8002;
        cVar1 = '\n';
      }
    }
  } while( true );
}



// WARNING: This function may have set the stack pointer
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void RST4(undefined2 param_1,undefined1 *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (char)((ushort)param_1 >> 8);
  while( true ) {
    param_2 = param_2 + 1;
    cVar1 = cVar1 + -1;
    if (cVar1 == '\0') break;
    *param_2 = 0x30;
  }
  _DAT_ram_86fe = 0x2a;
  FUN_ram_00f0(0);
  _DAT_ram_86fe = 0x2d;
  FUN_ram_00f0();
  while ((DAT_io_0018 & 0x80) != 0) {
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x3d;
      DAT_io_0004 = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 0x44;
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x4d;
      DAT_io_0008 = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 0x54;
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      _DAT_ram_86fe = 0x5d;
      DAT_io_000c = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    _DAT_ram_86fe = 100;
    FUN_ram_00e8();
    cVar1 = '\x03';
    do {
      DAT_io_0004 = 0xff;
      DAT_io_0008 = 0xff;
      DAT_io_000c = 0xff;
      _DAT_ram_86fe = 0x71;
      FUN_ram_0148();
      _DAT_ram_86fe = 0x74;
      FUN_ram_00e8();
      _DAT_ram_86fe = 0x77;
      FUN_ram_0148();
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    _DAT_ram_86fe = 0x7e;
    FUN_ram_00e8();
  }
  do {
    while( true ) {
      _DAT_ram_86fe = 0x84;
      FUN_ram_00e8();
      _DAT_ram_86fe = 0x87;
      cVar1 = FUN_ram_00f0();
      if (cVar1 == '\x02') break;
      _DAT_ram_86fe = 0x8e;
      FUN_ram_011b();
    }
    cVar1 = '\n';
    _DAT_ram_86fe = 0x96;
    DAT_ram_8000 = FUN_ram_0107();
    _DAT_ram_86fe = 0x9e;
    DAT_io_0004 = DAT_ram_8000;
    DAT_ram_8001 = FUN_ram_0107();
    _DAT_ram_86fe = 0xa6;
    DAT_io_0008 = DAT_ram_8001;
    DAT_ram_8002 = FUN_ram_0107();
    DAT_io_000c = DAT_ram_8002;
    while( true ) {
      _DAT_ram_86fe = 0xae;
      FUN_ram_012c();
      _DAT_ram_86fe = 0xb3;
      cVar2 = FUN_ram_011b(DAT_io_001d);
      if (cVar2 == '0') break;
      cVar1 = cVar1 + -1;
      if (cVar1 == '\0') {
        _DAT_ram_86fe = 0xbd;
        FUN_ram_00e8();
        do {
        } while (DAT_io_0018 != 0);
        _DAT_ram_86fe = 199;
        FUN_ram_013c(0);
        do {
          do {
          } while (DAT_io_0018 == 0);
          _DAT_ram_86fe = 0xcf;
          FUN_ram_013c(DAT_io_0018);
        } while (DAT_io_0018 == 0);
        DAT_io_0004 = DAT_ram_8000;
        DAT_io_0008 = DAT_ram_8001;
        DAT_io_000c = DAT_ram_8002;
        cVar1 = '\n';
      }
    }
  } while( true );
}



void RST7(char param_1,undefined2 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (char)((ushort)param_2 >> 8);
  while( true ) {
    do {
      DAT_io_0004 = param_1;
      param_1 = FUN_ram_0148();
      param_1 = param_1 << 1;
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      DAT_io_0008 = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    FUN_ram_00e8();
    cVar1 = '\x01';
    cVar2 = '\b';
    do {
      DAT_io_000c = cVar1;
      cVar1 = FUN_ram_0148();
      cVar1 = cVar1 << 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    FUN_ram_00e8();
    cVar1 = '\x03';
    do {
      DAT_io_0004 = 0xff;
      DAT_io_0008 = 0xff;
      DAT_io_000c = 0xff;
      FUN_ram_0148();
      FUN_ram_00e8();
      FUN_ram_0148();
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    FUN_ram_00e8();
    if ((DAT_io_0018 & 0x80) == 0) break;
    param_1 = '\x01';
    cVar1 = '\b';
  }
  do {
    while( true ) {
      FUN_ram_00e8();
      cVar1 = FUN_ram_00f0();
      if (cVar1 == '\x02') break;
      FUN_ram_011b();
    }
    cVar1 = '\n';
    DAT_ram_8000 = FUN_ram_0107();
    DAT_io_0004 = DAT_ram_8000;
    DAT_ram_8001 = FUN_ram_0107();
    DAT_io_0008 = DAT_ram_8001;
    DAT_ram_8002 = FUN_ram_0107();
    DAT_io_000c = DAT_ram_8002;
    while( true ) {
      FUN_ram_012c();
      cVar2 = FUN_ram_011b(DAT_io_001d);
      if (cVar2 == '0') break;
      cVar1 = cVar1 + -1;
      if (cVar1 == '\0') {
        FUN_ram_00e8();
        do {
        } while (DAT_io_0018 != 0);
        FUN_ram_013c(0);
        do {
          do {
          } while (DAT_io_0018 == 0);
          FUN_ram_013c(DAT_io_0018);
        } while (DAT_io_0018 == 0);
        DAT_io_0004 = DAT_ram_8000;
        DAT_io_0008 = DAT_ram_8001;
        DAT_io_000c = DAT_ram_8002;
        cVar1 = '\n';
      }
    }
  } while( true );
}



void NMI_ISR(undefined1 param_1)

{
  char cVar1;
  char cVar2;
  
  while( true ) {
    cVar2 = '\x03';
    do {
      DAT_io_0004 = param_1;
      DAT_io_0008 = param_1;
      DAT_io_000c = param_1;
      FUN_ram_0148();
      FUN_ram_00e8();
      FUN_ram_0148();
      param_1 = 0xff;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    FUN_ram_00e8();
    if ((DAT_io_0018 & 0x80) == 0) break;
    cVar2 = '\x01';
    cVar1 = '\b';
    do {
      DAT_io_0004 = cVar2;
      cVar2 = FUN_ram_0148();
      cVar2 = cVar2 << 1;
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    FUN_ram_00e8();
    cVar2 = '\x01';
    cVar1 = '\b';
    do {
      DAT_io_0008 = cVar2;
      cVar2 = FUN_ram_0148();
      cVar2 = cVar2 << 1;
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    FUN_ram_00e8();
    cVar2 = '\x01';
    cVar1 = '\b';
    do {
      DAT_io_000c = cVar2;
      cVar2 = FUN_ram_0148();
      cVar2 = cVar2 << 1;
      cVar1 = cVar1 + -1;
    } while (cVar1 != '\0');
    FUN_ram_00e8();
    param_1 = 0xff;
  }
  do {
    while( true ) {
      FUN_ram_00e8();
      cVar2 = FUN_ram_00f0();
      if (cVar2 == '\x02') break;
      FUN_ram_011b();
    }
    cVar2 = '\n';
    DAT_ram_8000 = FUN_ram_0107();
    DAT_io_0004 = DAT_ram_8000;
    DAT_ram_8001 = FUN_ram_0107();
    DAT_io_0008 = DAT_ram_8001;
    DAT_ram_8002 = FUN_ram_0107();
    DAT_io_000c = DAT_ram_8002;
    while( true ) {
      FUN_ram_012c();
      cVar1 = FUN_ram_011b(DAT_io_001d);
      if (cVar1 == '0') break;
      cVar2 = cVar2 + -1;
      if (cVar2 == '\0') {
        FUN_ram_00e8();
        do {
        } while (DAT_io_0018 != 0);
        FUN_ram_013c(0);
        do {
          do {
          } while (DAT_io_0018 == 0);
          FUN_ram_013c(DAT_io_0018);
        } while (DAT_io_0018 == 0);
        DAT_io_0004 = DAT_ram_8000;
        DAT_io_0008 = DAT_ram_8001;
        DAT_io_000c = DAT_ram_8002;
        cVar2 = '\n';
      }
    }
  } while( true );
}



void FUN_ram_00e8(void)

{
  DAT_io_0004 = 0;
  DAT_io_0008 = 0;
  DAT_io_000c = 0;
  return;
}



undefined1 FUN_ram_00f0(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\x01';
  do {
    cVar2 = -1;
    do {
      if ((DAT_io_001c & 1) != 0) {
        return DAT_io_001d;
      }
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return 0;
}



undefined1 FUN_ram_0107(void)

{
  do {
  } while ((DAT_io_001c & 1) == 0);
  return DAT_io_001d;
}



undefined1 FUN_ram_0110(void)

{
  undefined2 in_AF;
  
  DAT_io_001d = (undefined1)((ushort)in_AF >> 8);
  do {
  } while ((DAT_io_001c & 2) == 0);
  return DAT_io_001d;
}



void FUN_ram_011b(void)

{
  if (DAT_io_0018 != '\0') {
    FUN_ram_0110(0x31);
    return;
  }
  FUN_ram_0110(0x30);
  return;
}



void FUN_ram_012c(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = '\x02';
  do {
    cVar3 = 'd';
    do {
      cVar1 = FUN_ram_011b();
      if (cVar1 == '0') {
        return;
      }
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  return;
}



void FUN_ram_013c(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\x01';
  do {
    cVar2 = -1;
    do {
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}



void FUN_ram_0148(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = -1;
  do {
    cVar2 = -1;
    do {
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return;
}


