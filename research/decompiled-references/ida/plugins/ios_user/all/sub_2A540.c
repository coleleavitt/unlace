__int64 __fastcall sub_2A540(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  __int128 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v5 = -2;
  v6 = -1;
  v7 = 0;
  v3 = -1;
  if ( (unsigned __int8)sub_46CE0(a1, a2, &v5, a3) )
    v3 = v6;
  if ( v5 >= -1 && v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v3;
}

