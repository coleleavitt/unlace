__int64 __fastcall sub_2FD90(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  _QWORD v5[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-68h]
  __int64 v7; // [rsp+18h] [rbp-60h]
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int128 v11; // [rsp+38h] [rbp-40h]
  __int128 v12; // [rsp+48h] [rbp-30h]
  unsigned __int64 v13; // [rsp+58h] [rbp-20h]

  v2 = *a1;
  v13 = __readfsqword(0x28u);
  v11 = 0;
  v3 = v5;
  v5[1] = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v5[0] = off_97188;
  v10 = 0;
  v12 = 0;
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD))(v2 + 40))(a1, a2, v5, 0);
  v5[0] = off_97188;
  LOBYTE(v3) = HIDWORD(v6) == 12;
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return (unsigned int)v3;
}

