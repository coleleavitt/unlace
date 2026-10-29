__int64 __fastcall sub_4070(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v2;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 312)) == 0 )
    sub_3890((__int64)"start section: couldn't read index");
  v6 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 312);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "start index", 0);
  return 1;
}

