__int64 __fastcall sub_128E0(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1 + 1072);
  v6[1] = __readfsqword(0x28u);
  if ( !v4 || !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v4 + 96LL))(v4, a4, v6) )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = v6[0];
  return 1;
}

