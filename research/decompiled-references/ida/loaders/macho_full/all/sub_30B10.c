__int64 __fastcall sub_30B10(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( a4 )
  {
    v5 = operator new(0x38u);
    sub_309F0(v5, a1, a2, a3);
    return v5;
  }
  v7 = operator new(0x38u);
  *(_QWORD *)(v7 + 8) = 0;
  v5 = v7;
  *(_BYTE *)(v7 + 48) = 0;
  *(_OWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = &off_63628;
  *(_QWORD *)(v7 + 32) = a1;
  *(_QWORD *)(v7 + 40) = a2;
  if ( !a3 )
    return v5;
  v8 = 0;
  v9 = a3 + 1;
  if ( a3 != -1 )
  {
    v10 = qvector_reserve();
    v11 = *(_QWORD *)(v5 + 16);
    *(_QWORD *)(v5 + 8) = v10;
    memset((void *)(v10 + v11), 0, v9 - v11);
    *(_QWORD *)(v5 + 16) = v9;
    v8 = *(_QWORD *)(v5 + 8);
  }
  *(_BYTE *)(v8 + a3) = 0;
  return v5;
}

