__int64 __fastcall sub_7CB90(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // r12
  char v4; // r14
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( *a2 >= a2[1] )
  {
    if ( !under_debugger )
      sub_3835A0(50586);
    BUG();
  }
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = (_BYTE *)*a2;
  if ( *a2 < a2[1] )
  {
    while ( 1 )
    {
      v4 = *v3 ^ 0x7C;
      if ( *v3 == 124 )
        break;
      v5 = *(_QWORD *)(a1 + 8);
      v6 = 2;
      if ( v5 )
        v6 = v5-- + 1;
      v7 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v6 )
      {
        v8 = qvector_reserve();
        *(_QWORD *)a1 = v8;
        v7 = v8;
      }
      *(_QWORD *)(a1 + 8) = v6;
      ++v3;
      *(_BYTE *)(v7 + v5) = v4;
      *(_BYTE *)(*(_QWORD *)a1 + v5 + 1) = 0;
      if ( (unsigned __int64)v3 >= a2[1] )
        goto LABEL_11;
    }
    ++v3;
  }
LABEL_11:
  *a2 = v3;
  return a1;
}

