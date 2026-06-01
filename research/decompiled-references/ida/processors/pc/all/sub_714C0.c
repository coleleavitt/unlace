unsigned __int64 __fastcall sub_714C0(__int64 a1, double a2, double a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+8h] [rbp-60h]
  __int128 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+28h] [rbp-40h]
  _DWORD *v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( a5 )
  {
    if ( (debug & 8) != 0 )
      sub_224B0((__int64)"%a: adding to function %a\n", a2, a3);
    v9 = a1;
    v10 = 0;
    v12 = 0;
    v13 = -1;
    v14 = a5;
    v15 = -1;
    v16 = a6;
    v11 = 0;
    if ( (unsigned int)sub_70B80(0.0, a1, a5, (__int64)&v9) )
    {
      sub_6FD80((__int64)&v9);
      if ( !v10 )
        return v17 - __readfsqword(0x28u);
      goto LABEL_6;
    }
    if ( v10 )
    {
LABEL_6:
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  return v17 - __readfsqword(0x28u);
}
