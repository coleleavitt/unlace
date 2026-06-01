__int64 __fastcall sub_687F0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // rax
  __int64 v4; // rbp
  int v5; // [rsp+Ch] [rbp-2Ch] BYREF
  _QWORD v6[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 32);
  v6[1] = __readfsqword(0x28u);
  v5 = 0;
  v6[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(v1[32] + 112LL))(
         *(_QWORD *)(*v1 + 24LL),
         17,
         &v5,
         v6) )
  {
    return -1;
  }
  if ( !v5 )
    return -1;
  v3 = *(_QWORD **)(a1 + 32);
  v5 = 0;
  v6[0] = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))(v3[32] + 112LL))(
         *(_QWORD *)(*v3 + 24LL),
         18,
         &v5,
         v6)
    || !v5 )
  {
    return -1;
  }
  v4 = sub_9A220(*(_QWORD *)(a1 + 32));
  return v4 - sub_9A0A0(*(_QWORD *)(a1 + 32));
}

