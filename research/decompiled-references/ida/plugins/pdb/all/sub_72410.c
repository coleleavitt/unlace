__int64 __fastcall sub_72410(_QWORD **a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  if ( !(unsigned int)sub_722A0(a1, v3) )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v3[0] + 112LL))(v3[0], a2);
  return 0;
}

