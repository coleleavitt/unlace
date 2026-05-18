__int64 __fastcall sub_CCE00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
  {
    sub_CC740(a1);
    a2 = (unsigned int)a2;
  }
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 288LL);
  *(_DWORD *)(v3 + 28) = a2;
  if ( (int)a2 < 0 )
  {
    v4 = -(__int64)(int)a2;
    a2 = 1000000000;
    v5 = (v4 << 10) / (*(_DWORD *)(v3 + 36) + *(_DWORD *)(v3 + 40));
    if ( v5 <= 1000000000 )
      a2 = v5;
  }
  ((void (__fastcall *)(_QWORD))*(&xmmword_241548 + 1))(*(_QWORD *)(v3 + 64));
  if ( *(_BYTE *)(a1 + 17) )
    sub_CCDE0(a1, a2, v6);
  return 0;
}
