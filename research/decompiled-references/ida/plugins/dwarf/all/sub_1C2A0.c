__int64 __fastcall sub_1C2A0(_QWORD *a1, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD); // rdi

  if ( (unsigned __int16)sub_97BF0(a2) == 52 )
  {
    v3 = (void (__fastcall ***)(_QWORD))a1[5];
    if ( v3 )
      (**v3)(v3);
    sub_1BFF0(a2, a1[3], a1[4]);
  }
  return 0;
}

