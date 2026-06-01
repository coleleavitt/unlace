unsigned __int64 __fastcall sub_2C2260(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v4; // rcx
  __int64 v5; // r15
  unsigned __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // [rsp+0h] [rbp-C8h]
  int v13; // [rsp+Ch] [rbp-BCh]
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-A8h] BYREF
  int v15; // [rsp+28h] [rbp-A0h]
  __int64 v16; // [rsp+30h] [rbp-98h] BYREF
  __int128 v17; // [rsp+38h] [rbp-90h]
  unsigned __int64 v18; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall **v19)(); // [rsp+50h] [rbp-78h]
  int v20; // [rsp+58h] [rbp-70h]
  __int64 v21; // [rsp+60h] [rbp-68h] BYREF
  __int128 v22; // [rsp+68h] [rbp-60h]
  unsigned __int64 v23; // [rsp+78h] [rbp-50h]
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v15 = -1;
    v16 = 0;
    v18 = 0xFFFFFFFEFFFFFFFFLL;
    v14 = off_4ADB98;
    v17 = 0;
    if ( a2 < v2 )
    {
      v7 = a2;
      do
      {
        v8 = (_QWORD *)(*a1 + 48 * v7);
        v9 = v8[2];
        *v8 = off_4ADB70;
        if ( v9 )
        {
          v8[3] = 0;
          qfree();
        }
        ++v7;
      }
      while ( v2 != v7 );
      a1[1] = a2;
    }
    else
    {
      v4 = a1[2];
      if ( (unsigned __int64)&v14 < *a1 || (unsigned __int64)&v14 >= *a1 + 48 * v4 )
      {
        if ( v4 < a2 )
        {
          *a1 = qvector_reserve();
          v2 = a1[1];
        }
        for ( ; v2 < a2; *(_QWORD *)(v5 + 40) = 0xFFFFFFFEFFFFFFFFLL )
        {
          v5 = *a1 + 48 * v2;
          *(_QWORD *)v5 = off_4ADB70;
          *(_DWORD *)(v5 + 8) = -1;
          *(_QWORD *)(v5 + 16) = 0;
          *(_OWORD *)(v5 + 24) = 0;
          sub_2A6FA0((_QWORD *)(v5 + 16), (__int64)&v16);
          ++v2;
          *(_QWORD *)v5 = off_4ADB98;
        }
        a1[1] = a2;
      }
      else
      {
        v20 = -1;
        v19 = off_4ADB70;
        v21 = 0;
        v22 = 0;
        sub_2A6FA0(&v21, (__int64)&v16);
        v19 = off_4ADB98;
        v13 = v20;
        v12 = v21;
        v23 = 0xFFFFFFFEFFFFFFFFLL;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve();
        v10 = a1[1];
        if ( v10 < a2 )
        {
          do
          {
            v11 = *a1 + 48 * v10;
            *(_QWORD *)v11 = off_4ADB70;
            *(_QWORD *)(v11 + 16) = 0;
            *(_DWORD *)(v11 + 8) = v13;
            v20 = v13;
            *(_OWORD *)(v11 + 24) = 0;
            v21 = v12;
            sub_2A6FA0((_QWORD *)(v11 + 16), (__int64)&v21);
            ++v10;
            *(_QWORD *)v11 = off_4ADB98;
            *(_QWORD *)(v11 + 40) = 0xFFFFFFFEFFFFFFFFLL;
          }
          while ( a2 != v10 );
        }
        a1[1] = a2;
        if ( v12 )
          qfree();
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}

