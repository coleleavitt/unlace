__int64 __fastcall sub_71B0(__int64 a1, __int64 a2, unsigned int a3, const char *a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx

  if ( !a4 )
    return 0;
  v5 = a3;
  if ( !*(_BYTE *)(a1 + 8) )
    v5 = qword_379D8 + a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) & v5;
  if ( !(unsigned __int8)is_loaded() || v6 >= *(_QWORD *)(a1 + 72) && v6 < *(_QWORD *)(a1 + 80) )
    return 0;
  create_data();
  strlen(a4);
  create_data();
  return 0;
}

