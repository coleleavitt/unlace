__int64 __fastcall sub_29EDB0(__int64 a1, __int64 a2, _DWORD *a3, double a4)
{
  _QWORD *v6; // rax
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  sub_29EC30(a1, a4);
  *(_DWORD *)a1 = 2;
  if ( a3 )
  {
    if ( *a3 == 1 )
    {
      *(_DWORD *)a1 = 1;
      sub_32C540(v7, a2, (_QWORD *)a3 + 1);
      copy_tinfo_t();
      clear_tinfo_t();
      sub_29EC30((__int64)a3, a4);
      operator delete(a3, 0x10u);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = a3;
    }
  }
  else
  {
    v6 = (_QWORD *)operator new(0x10u);
    *v6 = 0;
    v6[1] = 0;
    *(_QWORD *)(a1 + 8) = v6;
  }
  return a1;
}

