__int64 __fastcall sub_75D50(__int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 (__fastcall **v3)(_QWORD, int *, _QWORD *, __int64); // r15
  _QWORD *v4; // rbx
  void *v5; // rdi
  void *s; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+8h] [rbp-70h]
  void *v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  _QWORD v13[9]; // [rsp+30h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 584) )
  {
    if ( *(_QWORD *)(a1 + 152) > 1u )
    {
      LODWORD(v2) = 1;
      v3 = (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))(a1 + 576);
      do
      {
        s = v13;
        v8 = 1;
        v9 = nullptr;
        v10 = 0;
        v11 = 1065353216;
        v12 = 0;
        v13[0] = 0;
        if ( (unsigned __int8)sub_75A60(a1, (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))&s, v2) )
          sub_75BD0(a1, v3, (__int64 (__fastcall **)(_QWORD, int *, _QWORD *, __int64))&s, v2);
        v4 = v9;
        if ( v9 )
        {
          do
          {
            v5 = v4;
            v4 = (_QWORD *)*v4;
            operator delete(v5, 0x10u);
          }
          while ( v4 );
        }
        memset(s, 0, 8 * v8);
        v10 = 0;
        v9 = nullptr;
        if ( s != v13 )
          operator delete(s, 8 * v8);
        v2 = (unsigned int)(v2 + 1);
      }
      while ( v2 < *(_QWORD *)(a1 + 152) );
    }
    sub_75850(a1);
  }
  return 1;
}

