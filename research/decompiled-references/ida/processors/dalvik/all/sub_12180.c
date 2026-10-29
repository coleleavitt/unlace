__int64 __fastcall sub_12180(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r13
  __int64 v4; // r12
  const char *v5; // rbp
  _QWORD *v6; // rax

  switch ( *(_WORD *)(a2 + 24) )
  {
    case 0x1E:
      v3 = 45;
      v4 = 44;
      v5 = "Acquire the monitor for the indicated object";
      goto LABEL_4;
    case 0x1F:
      v3 = 45;
      v4 = 44;
      v5 = "Release the monitor for the indicated object";
      goto LABEL_4;
    case 0x20:
      v3 = 65;
      v4 = 64;
      v5 = "Throw ClassCastException if ref cannot be cast to indicated type";
      goto LABEL_4;
    case 0x21:
      v3 = 47;
      v4 = 46;
      v5 = "Store 1 if obj has indicated type, 0 otherwise";
      goto LABEL_4;
    case 0x22:
    case 0x23:
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
    case 0x33:
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
      return 0;
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
      v3 = 73;
      v4 = 72;
      v5 = "Compare. Yields 0 if equal, 1 if second is larger, -1 if first is larger";
      goto LABEL_4;
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      v3 = 23;
      v4 = 22;
      v5 = "Get element from array";
      goto LABEL_4;
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4A:
    case 0x4B:
    case 0x4C:
      v3 = 25;
      v4 = 24;
      v5 = "Store into array element";
      goto LABEL_4;
    case 0x4D:
    case 0x4E:
    case 0x4F:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
      v3 = 28;
      v4 = 27;
      v5 = "Get class instance variable";
      goto LABEL_4;
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5A:
      v3 = 30;
      v4 = 29;
      v5 = "Store class instance variable";
      goto LABEL_4;
    case 0x5B:
    case 0x5C:
    case 0x5D:
    case 0x5E:
    case 0x5F:
    case 0x60:
    case 0x61:
      v3 = 26;
      v4 = 25;
      v5 = "Get static class variable";
      goto LABEL_4;
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
      v3 = 28;
      v4 = 27;
      v5 = "Store static class variable";
LABEL_4:
      v6 = (_QWORD *)*a1;
      if ( a1[2] < v3 )
      {
        v6 = (_QWORD *)qvector_reserve(a1, *a1, v3, 1);
        *a1 = v6;
      }
      a1[1] = v3;
      *v6 = *(_QWORD *)v5;
      *(_QWORD *)((char *)v6 + v4 - 8) = *(_QWORD *)&v5[v4 - 8];
      qmemcpy(
        (void *)((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v5 - ((const char *)v6 - ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v4 + (_DWORD)v6 - (((_DWORD)v6 + 8) & 0xFFFFFFF8)) >> 3));
      *(_BYTE *)(*a1 + v4) = 0;
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

