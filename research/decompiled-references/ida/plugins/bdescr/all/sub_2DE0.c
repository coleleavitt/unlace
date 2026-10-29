__int64 __fastcall sub_2DE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rdx
  char v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 i; // rbp
  int v9; // eax
  __int64 v10; // rsi
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // al
  char v15; // dl
  __int64 v16; // rax
  __int64 result; // rax
  const char *v18; // rdi
  int v19; // [rsp+8h] [rbp-50h]

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
  if ( *(_QWORD *)(a1 + 216) )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree();
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  callui(25, a2, v4);
  v6 = 66;
  for ( i = netnode_supfirst(); i != -1; i = netnode_supnext() )
  {
    if ( (unsigned __int8)callui(27, v6, v7) )
      break;
    if ( (unsigned __int8)callui(27, v6, v13) )
      return 0;
    v14 = netnode_charval();
    v15 = v14 & v5;
    if ( *(_BYTE *)(a1 + 192) )
    {
      if ( (v14 & 0xA) == 0 && (v15 || !v5) )
      {
LABEL_8:
        v9 = node2ea();
        v10 = *(_QWORD *)(a1 + 216);
        v11 = v9;
        v12 = *(_QWORD *)(a1 + 224);
        if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v12 + 1) )
        {
          v19 = v11;
          v16 = qvector_reserve();
          v11 = v19;
          *(_QWORD *)(a1 + 216) = v16;
          v10 = v16;
          v12 = *(_QWORD *)(a1 + 224);
        }
        *(_DWORD *)(v10 + 4 * v12) = v11;
        ++*(_QWORD *)(a1 + 224);
      }
    }
    else if ( v15 )
    {
      goto LABEL_8;
    }
    v6 = i;
  }
  result = 1;
  if ( !*(_QWORD *)(a1 + 224) )
  {
    v18 = "No %s RTTI descriptors were found";
    if ( *(_BYTE *)(a1 + 192) )
      v18 = "There were no problems with %s RTTI";
    sub_2D10((__int64)v18);
    return 0;
  }
  return result;
}

