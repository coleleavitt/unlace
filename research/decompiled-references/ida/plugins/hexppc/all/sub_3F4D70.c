unsigned __int64 __fastcall sub_3F4D70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  sub_195A30(a1, a3);
  *(_QWORD *)(a1 + 384) = -1;
  *(_QWORD *)(a1 + 392) = -1;
  *(_QWORD *)a1 = &off_4D9A78;
  *(_QWORD *)(a1 + 360) = a2;
  *(_BYTE *)(a1 + 400) = 0;
  *(_OWORD *)(a1 + 368) = -1;
  if ( (unsigned __int8)get_stkarg_area_info() )
    *(_DWORD *)(a1 + 352) = 0;
  return v4 - __readfsqword(0x28u);
}

