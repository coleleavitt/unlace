__int64 __fastcall sub_641B0(void *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = (void *)__readfsqword(0x28u);
  v2 = operator new(0x68u);
  *(_BYTE *)(v2 + 8) = 14;
  v3 = v2;
  *(_QWORD *)v2 = &off_2369E0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 88) = 0;
  if ( a1 )
  {
    v5[0] = a1;
    if ( __CFADD__(a2, a1) || !(unsigned __int8)sub_63FB0((_QWORD *)(v2 + 16), v5, a2) )
    {
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      return 0;
    }
  }
  return v3;
}
