unsigned __int64 __fastcall sub_18D1A0(_BYTE *a1, int *a2, __int64 a3)
{
  _BYTE *v5; // rsi
  __int64 v6; // r13
  unsigned __int64 v7; // r15
  int v8; // eax
  void *v10; // [rsp+0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v5 = &v10;
  v10 = nullptr;
  v11 = 0;
  if ( !(unsigned __int8)sub_19AD90((char *)"PATH") )
  {
    v6 = v11;
    v7 = 2;
    if ( (_QWORD)v11 )
    {
      v7 = v11 + 1;
      v6 = v11 - 1;
    }
    v5 = v10;
    if ( *((_QWORD *)&v11 + 1) < v7 )
    {
      v10 = (void *)sub_1987B0(&v10, v10, v7, 1);
      v5 = v10;
    }
    *(_QWORD *)&v11 = v7;
    v5[v6] = 46;
    *((_BYTE *)v10 + v6 + 1) = 0;
  }
  sub_1945E0(0, v5);
  ptr = nullptr;
  v13 = 0;
  sub_299F0((char **)&ptr);
  v8 = sub_18CEA0((__int64)ptr, a1, a2, a3, 0);
  if ( v8 )
    sub_18D0E0(
      (__int64)"Can't initialize help system.\nFile name: '%s', Reason: %s.\nPress Enter to exit.\n",
      a1,
      *((const char **)&unk_23CF60 - v8));
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    j__free(ptr);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    j__free(v10);
  }
  return v14 - __readfsqword(0x28u);
}
