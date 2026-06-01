__int64 __fastcall sub_360690(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // r10

  v3 = *(_QWORD *)(get_module_data() + 800) + 8LL;
  v4 = sub_3605F0(v3, *a2);
  if ( v4 < 0 )
    sub_35D910(v3);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
           a1,
           2,
           *(_QWORD *)(*(_QWORD *)(v5 + 184) + 120LL * v4 + 104));
}

