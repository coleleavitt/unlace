__int64 __fastcall sub_24C30(__int64 a1, const char **a2)
{
  __int64 v2; // r13
  size_t v4; // rbx
  __int64 result; // rax
  int v6; // edx
  int v7; // edx
  const char *v8; // rsi
  const char *v9; // r12
  const char *v10; // rax
  void *v11; // rdi
  __int64 v12; // rax

  v4 = (size_t)a2;
  unpack_dd();
  set_debug_event_code();
  *(_DWORD *)a1 = unpack_dd();
  *(_DWORD *)(a1 + 4) = unpack_dd();
  *(_QWORD *)(a1 + 8) = unpack_dq() - 1;
  result = unpack_dd();
  v6 = *(_DWORD *)(a1 + 20);
  *(_BYTE *)(a1 + 16) = (_DWORD)result != 0;
  v7 = v6 & 0xFFFFFFF;
  switch ( v7 )
  {
    case 1:
    case 8:
    case 11:
      return sub_24990(a1 + 24, (__int64)a2);
    case 2:
    case 4:
      v8 = a2[1];
      result = unpack_dd();
      if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
      {
        sub_242A0(v4, v8);
        return sub_24E50(v4, v8);
      }
      else
      {
        *(_DWORD *)(a1 + 24) = result;
      }
      return result;
    case 3:
    case 9:
    case 10:
      v9 = *a2;
      v10 = *a2;
      break;
    case 5:
      *(_QWORD *)(a1 + 24) = unpack_dq() - 1;
      result = unpack_dq() - 1;
      *(_QWORD *)(a1 + 32) = result;
      return result;
    case 7:
      return sub_24B40(a1 + 24, (__int64)a2);
    default:
      return result;
  }
  do
  {
    if ( v10 >= a2[1] )
    {
      result = (unsigned int)(v7 - 9);
      if ( (unsigned int)result > 1 && v7 != 3 )
        goto LABEL_19;
      goto LABEL_9;
    }
    ++v10;
  }
  while ( *(v10 - 1) );
  *a2 = v10;
  result = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( (unsigned int)(result - 9) <= 1 || (_DWORD)result == 3 )
  {
    if ( v9 )
    {
      result = strlen(v9);
      v4 = result;
      if ( result )
      {
        v11 = *(void **)(a1 + 24);
        v2 = result + 1;
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(result + 1) )
          goto LABEL_20;
        goto LABEL_17;
      }
    }
LABEL_9:
    *(_QWORD *)(a1 + 32) = 0;
    return result;
  }
LABEL_19:
  sub_242C0();
LABEL_20:
  v12 = qvector_reserve();
  *(_QWORD *)(a1 + 24) = v12;
  v11 = (void *)v12;
LABEL_17:
  *(_QWORD *)(a1 + 32) = v2;
  memmove(v11, v9, v4);
  result = *(_QWORD *)(a1 + 24);
  *(_BYTE *)(result + v4) = 0;
  return result;
}

