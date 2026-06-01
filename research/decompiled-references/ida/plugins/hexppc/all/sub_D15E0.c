unsigned __int64 __fastcall sub_D15E0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // al
  __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  get_stkarg_area_info();
  *(_QWORD *)a1 = 0;
  v4 = sub_36B4A0(*(_QWORD *)(a2 + 1504), a3);
  v5 = 0;
  if ( !v4 )
    v5 = -1;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  return v7 - __readfsqword(0x28u);
}

