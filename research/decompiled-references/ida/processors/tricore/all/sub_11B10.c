__int64 __fastcall sub_11B10(double a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 72LL))(a3);
  *(_BYTE *)(v3 + 361) = 1;
  v4 = v3;
  if ( (unsigned __int8)sub_118A0(v3, 3, a1) )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1);
  *(_BYTE *)(v4 + 361) = 0;
  return 0;
}

