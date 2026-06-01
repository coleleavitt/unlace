__int64 __fastcall sub_2DE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rdx
  char v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 i; // rbp
  int v10; // eax
  __int64 v11; // rsi
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // al
  char v16; // dl
  __int64 v17; // rax
  __int64 result; // rax
  const char *v19; // rdi
  int v20; // [rsp+8h] [rbp-50h]

  v2 = *(int *)(a1 + 196);
  if ( *(_BYTE *)(a1 + 192) )
  {
    v4 = byte_4428;
    v5 = byte_4428[v2];
  }
  else
  {
    v4 = byte_442B;
    v5 = byte_442B[v2];
  }
  v6 = *(_QWORD *)(a1 + 216);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  callui(25, a2, v4);
  v7 = 66;
  for ( i = netnode_supfirst(*(_QWORD *)(a1 + 184), 66); i != -1; i = netnode_supnext(*(_QWORD *)(a1 + 184), i, 66) )
  {
    if ( (unsigned __int8)callui(27, v7, v8) )
      break;
    if ( (unsigned __int8)callui(27, v7, v14) )
      return 0;
    v15 = netnode_charval(*(_QWORD *)(a1 + 184), i, 66);
    v16 = v15 & v5;
    if ( *(_BYTE *)(a1 + 192) )
    {
      if ( (v15 & 0xA) == 0 && (v16 || !v5) )
      {
LABEL_8:
        v10 = node2ea(i);
        v11 = *(_QWORD *)(a1 + 216);
        v12 = v10;
        v13 = *(_QWORD *)(a1 + 224);
        if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v13 + 1) )
        {
          v20 = v12;
          v17 = qvector_reserve(a1 + 216, v11, v13 + 1, 4);
          v12 = v20;
          *(_QWORD *)(a1 + 216) = v17;
          v11 = v17;
          v13 = *(_QWORD *)(a1 + 224);
        }
        *(_DWORD *)(v11 + 4 * v13) = v12;
        ++*(_QWORD *)(a1 + 224);
      }
    }
    else if ( v16 )
    {
      goto LABEL_8;
    }
    v7 = i;
  }
  result = 1;
  if ( !*(_QWORD *)(a1 + 224) )
  {
    v19 = "No %s RTTI descriptors were found";
    if ( *(_BYTE *)(a1 + 192) )
      v19 = "There were no problems with %s RTTI";
    sub_2D10((__int64)v19);
    return 0;
  }
  return result;
}
