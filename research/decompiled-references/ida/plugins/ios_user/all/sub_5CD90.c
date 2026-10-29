__int64 __fastcall sub_5CD90(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  char *v8; // rsi
  char *v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v10 = 0;
  v9 = (char *)qvector_reserve();
  *(_QWORD *)&v10 = 14;
  strcpy(v9, "QPassSignals:");
  v2 = *a2;
  v3 = *a2 + 4 * a2[1];
  if ( v3 != *a2 )
  {
    do
    {
      sub_20960((__int64 *)&v9);
      v2 += 4;
    }
    while ( v3 != v2 );
  }
  v4 = v10;
  if ( (unsigned __int64)v10 > 1 )
  {
    v8 = v9;
    if ( v9[(_QWORD)v10 - 2] == 59 )
    {
      if ( (__int64)v10 - 1 <= 1 )
      {
        if ( v9 )
        {
          *(_QWORD *)&v10 = 0;
          qfree();
          v9 = nullptr;
          *((_QWORD *)&v10 + 1) = 0;
        }
      }
      else
      {
        if ( *((_QWORD *)&v10 + 1) < (unsigned __int64)(v10 - 1) )
        {
          v9 = (char *)qvector_reserve();
          v8 = v9;
        }
        *(_QWORD *)&v10 = v4 - 1;
        v8[v4 - 2] = 0;
      }
    }
  }
  LOBYTE(v5) = sub_5B360(a1, &v9);
  v6 = v5;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v6;
}

