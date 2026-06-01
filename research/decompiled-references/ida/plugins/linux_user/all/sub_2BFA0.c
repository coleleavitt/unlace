unsigned __int64 __fastcall sub_2BFA0(__int64 *a1, __int64 *a2, __int64 a3)
{
  const char *v5; // rcx
  __int64 v6; // r13
  unsigned __int64 v7; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+0h] [rbp-70h] BYREF
  _BYTE *v12; // [rsp+8h] [rbp-68h] BYREF
  __int128 v13; // [rsp+10h] [rbp-60h]
  const char *v14; // [rsp+28h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h]
  unsigned __int64 v16; // [rsp+40h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v12 = nullptr;
  v13 = 0;
  v11 = *(_QWORD *)(a3 + 32);
  v12 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v13 = 2;
  *v12 = 63;
  v12[1] = 0;
  if ( a3 && a1[22] > 0 && a1[24] )
    sub_2AFC0(a1[20], (__int64 *)&v12, a1 + 22, *(_DWORD *)a3);
  v14 = nullptr;
  v15 = 0;
  sub_BF00((__int64 *)&v14);
  v5 = s;
  if ( (_QWORD)v15 )
    v5 = v14;
  sub_2A8C0(*(_QWORD *)(a1[20] + 472), &v11, 1u, v5, *(_QWORD *)(a3 + 24), -1);
  v6 = v11;
  v7 = a2[1];
  if ( v7 < v11 )
  {
    v9 = *a2;
    if ( a2[2] < v11 )
    {
      v10 = qvector_reserve();
      *a2 = v10;
      v7 = a2[1];
      v9 = v10;
    }
    memset((void *)(v9 + v7), 0, v6 - v7);
    a2[1] = v6;
  }
  else if ( v11 != v7 )
  {
    a2[1] = v11;
  }
  qlseek();
  sub_27030(a1[20], *a2, v6);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

