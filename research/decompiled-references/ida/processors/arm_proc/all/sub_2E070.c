__int64 __fastcall sub_2E070(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // di
  int v5; // eax
  int v6; // r12d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r15d
  __int64 v11; // r8
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v16; // [rsp+10h] [rbp-60h] BYREF
  __int128 v17; // [rsp+18h] [rbp-58h]
  char v18; // [rsp+28h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-38h]

  v4 = *(_WORD *)(a2 + 24);
  v19 = __readfsqword(0x28u);
  v5 = sub_25C10(v4);
  if ( v5 == 1 )
    return 0;
  v6 = v5;
  v7 = *(unsigned __int16 *)(a3 + 6);
  if ( v7 == 161 || v7 == 13 || (unsigned __int8)netnode_charval() == 3 )
    return 0;
  v8 = *(unsigned __int16 *)(a3 + 6);
  v9 = *(_QWORD *)(a2 + 16);
  v16 = nullptr;
  v18 = 0;
  v17 = 0;
  v10 = sub_81F70(a1, &v16, v9, v8, 0, 0);
  if ( (_BYTE)v10 )
  {
    v11 = 0;
    if ( *(char *)(a2 + 28) >= 0 )
      v11 = *(_QWORD *)(a3 + 16);
    sub_2D9A0(a1, a2, a3, 0, v11, (__int64)&v16, v6, 0);
    if ( v18 )
    {
      if ( (_QWORD)v17 != 1 )
      {
        v12 = v16;
        v13 = v16 + 3;
        if ( 24LL * (_QWORD)v17 != 24 )
        {
          while ( *v16 == *v13 )
          {
            v13 += 3;
            if ( &v16[3 * (_QWORD)v17] == v13 )
              goto LABEL_17;
          }
          goto LABEL_19;
        }
      }
LABEL_17:
      sub_22A80(a1, a2, (__int64)&v16, *(_QWORD *)(a3 + 16));
    }
  }
  v12 = v16;
LABEL_19:
  if ( v12 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v10;
}

