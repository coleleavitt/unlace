__int64 __fastcall sub_CDD0(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // [rsp+C8h] [rbp-30h]

  v3 = __readfsqword(0x28u);
  if ( getseg() )
    get_segm_name();
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 344LL))(a1, a2);
}

