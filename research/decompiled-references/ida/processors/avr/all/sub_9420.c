__int64 __fastcall sub_9420(__int64 a1)
{
  int v3; // r13d
  int v4; // r14d
  int v5; // r12d
  void *v6; // r12
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // r14
  void *v10; // rdi
  __int64 v11; // rax

  if ( *(_DWORD *)(a1 + 320) > 0x6Bu )
  {
LABEL_3:
    *(_DWORD *)(a1 + 320) = 0;
    return 0;
  }
  switch ( *(_DWORD *)(a1 + 320) )
  {
    case 0:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
      goto LABEL_3;
    case 1:
      v3 = 64;
      v4 = 32;
      v5 = 1024;
      break;
    case 2:
    case 0x19:
      v3 = 512;
      v4 = 512;
      v5 = 0x2000;
      break;
    case 3:
      v3 = 0;
      v4 = 1024;
      v5 = 0x10000;
      break;
    case 4:
    case 0x65:
      v3 = 512;
      v4 = 1024;
      v5 = 0x2000;
      break;
    case 5:
      v3 = 2048;
      v4 = 4096;
      v5 = 0x10000;
      break;
    case 6:
      v3 = 4096;
      v4 = 0x2000;
      v5 = 0x40000;
      break;
    case 0x1F:
      v3 = 4096;
      v4 = 4096;
      v5 = 0x20000;
      break;
    case 0x23:
      v3 = 512;
      v4 = 512;
      v5 = 0x10000;
      break;
    case 0x33:
      v3 = 4096;
      v4 = 0x4000;
      v5 = 0x20000;
      break;
    case 0x66:
      v3 = 1024;
      v4 = 0x10000;
      v5 = 0x10000;
      break;
    case 0x67:
      v3 = 1024;
      v4 = 0x20000;
      v5 = 0x10000;
      break;
    case 0x68:
      v3 = 2048;
      v4 = 0x10000;
      v5 = 0x20000;
      break;
    case 0x69:
      v3 = 2048;
      v4 = 0x20000;
      v5 = 0x20000;
      break;
    case 0x6A:
      v3 = 4096;
      v4 = 0x10000;
      v5 = 0x40000;
      break;
    case 0x6B:
      v3 = 4096;
      v4 = 0x20000;
      v5 = 0x40000;
      break;
  }
  if ( !(unsigned __int8)choose_ioport_device2() )
  {
    sub_8880((__int64 *)(a1 + 136));
    *(_BYTE *)(*(_QWORD *)(a1 + 136) + 4LL) = 0;
    *(_DWORD *)(a1 + 340) = v5 >> 1;
    *(_DWORD *)(a1 + 336) = v4;
    *(_DWORD *)(a1 + 344) = v3;
    return 1;
  }
  if ( !*(_QWORD *)(a1 + 144) )
  {
    if ( !&unk_B62C )
      goto LABEL_13;
    goto LABEL_28;
  }
  v6 = *(void **)(a1 + 136);
  if ( v6 )
  {
    v7 = strlen(*(const char **)(a1 + 136));
    v8 = v7;
    if ( v7 )
    {
      v9 = v7 + 1;
      v10 = v6;
      if ( *(_QWORD *)(a1 + 152) < v7 + 1 )
      {
        v11 = qvector_reserve();
        *(_QWORD *)(a1 + 136) = v11;
        v10 = (void *)v11;
      }
      *(_QWORD *)(a1 + 144) = v9;
      memmove(v10, v6, v8);
      *(_BYTE *)(*(_QWORD *)(a1 + 136) + v8) = 0;
      goto LABEL_12;
    }
LABEL_28:
    *(_QWORD *)(a1 + 144) = 0;
LABEL_12:
    netnode_supset();
    sub_7270((__int64 *)(a1 + 128), 4);
  }
LABEL_13:
  auto_mark_range();
  return 1;
}

