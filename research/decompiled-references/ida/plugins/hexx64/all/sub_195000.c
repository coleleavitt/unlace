__int64 __fastcall sub_195000(__int64 a1, __int64 *a2)
{
  int v3; // r12d
  __int64 v4; // rbp
  __int64 v5; // rbp
  char v6; // si

  sub_8F680((__int64)a2, 2, "std_va_collector_t.va_collector");
  sub_901C0(a1, a2);
  sub_8F680((__int64)a2, 2, "std_va_collector_t.va_offs");
  sub_7F8E0(a2);
  if ( *(_QWORD *)(a1 + 72) )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      ++v3;
      sub_8FC50((__int64)a2, 4);
      v5 = *(_QWORD *)(a1 + 64) + 40 * v4;
      sub_7FD40(a2, *(_QWORD *)(v5 + 24));
      sub_7FD40(a2, *(_QWORD *)(v5 + 16));
      v6 = *(_BYTE *)(v5 + 32);
      v4 = v3;
      sub_7F6F0(a2, v6);
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 72) );
  }
  sub_8F680((__int64)a2, 2, "std_va_collector_t.backup_area");
  sub_7FD40(a2, *(_QWORD *)(a1 + 104) + 1LL);
  sub_8F680((__int64)a2, 2, "std_va_collector_t.min_nfixed");
  sub_7F8E0(a2);
  sub_8F680((__int64)a2, 2, "std_va_collector_t.need_va_list_var");
  return sub_7F6F0(a2, *(_BYTE *)(a1 + 116));
}

