__int64 __fastcall sub_20950(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  v1 = sub_20770(&v7, (__int64)"getprop", a1);
  if ( (_BYTE)v1 )
    LOBYTE(v1) = (_QWORD)v8 != 0;
  v2 = v7;
  if ( v7 )
  {
    v3 = v8;
    if ( (_QWORD)v8 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 24 * v4);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = v7;
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v1;
}

