__int64 __fastcall sub_2F9A0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx

  if ( (unsigned int)sub_2F880(0, (__int64)"Do you really want to reset all per-function settings?") == 1 )
  {
    v2 = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 48LL))(*(_QWORD *)v2);
    v2[16] = 1;
  }
  return 0;
}
