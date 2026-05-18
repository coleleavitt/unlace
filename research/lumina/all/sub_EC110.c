__int64 __fastcall sub_EC110(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4)
{
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  _DWORD *v9; // r11
  unsigned int v10; // r9d
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // [rsp+Ch] [rbp-5Ch]
  char v18; // [rsp+1Bh] [rbp-4Dh] BYREF
  int v19; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v20[9]; // [rsp+20h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  v6 = *(_BYTE *)(a1 + 33) == 0;
  v20[0] = 0;
  if ( v6 )
    goto LABEL_9;
  v7 = a2 + 1;
  v8 = dword_241470;
  v9 = (_DWORD *)(a1 + 56);
  v10 = *(_DWORD *)(a1 + 52);
  while ( 1 )
  {
    v11 = 0;
    if ( v7 > 1 )
      v11 = sub_CCA10((_DWORD *)(a1 + 52), v9, v7);
    if ( v7 != v11 && v8 / v10 + 1 != v7 )
      break;
    ++v7;
  }
  if ( v7 > *(_DWORD *)(a1 + 64) )
    goto LABEL_9;
  result = sub_EBFF0(a1, v7, &v18, &v19);
  if ( (_DWORD)result )
  {
    v13 = v20[0];
    *a4 = 0;
    if ( a3 )
    {
LABEL_12:
      *a3 = v13;
LABEL_13:
      if ( (_DWORD)result == 101 )
        return 0;
      return result;
    }
    goto LABEL_27;
  }
  if ( v18 != 4 || v19 != a2 )
  {
LABEL_9:
    if ( a3 )
    {
      result = sub_C3B70((_QWORD *)a1, a2, v20);
      if ( !(_DWORD)result )
      {
        v14 = v20[0];
        *a4 = _byteswap_ulong(**(_DWORD **)(v20[0] + 80LL));
        *a3 = v14;
        return result;
      }
      v13 = v20[0];
      *a4 = 0;
      goto LABEL_12;
    }
    result = sub_C3B70((_QWORD *)a1, a2, v20);
    if ( !(_DWORD)result )
    {
      v15 = v20[0];
      v6 = v20[0] == 0;
      *a4 = _byteswap_ulong(**(_DWORD **)(v20[0] + 80LL));
      if ( !v6 )
      {
        sub_C36A0(*(_QWORD *)(v15 + 112));
        return 0;
      }
      return result;
    }
    *a4 = 0;
    v13 = v20[0];
LABEL_27:
    if ( v13 )
    {
      v17 = result;
      sub_C36A0(*(_QWORD *)(v13 + 112));
      result = v17;
    }
    goto LABEL_13;
  }
  v16 = v20[0];
  *a4 = v7;
  if ( a3 )
  {
    *a3 = v16;
  }
  else if ( v16 )
  {
    sub_C36A0(*(_QWORD *)(v16 + 112));
    return 0;
  }
  return result;
}
