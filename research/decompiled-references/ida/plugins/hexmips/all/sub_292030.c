__int64 __fastcall sub_292030(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v5; // r13d
  _QWORD *v6; // rax
  _QWORD *v7; // r12
  unsigned __int8 v8; // cl
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  unsigned __int8 v15; // [rsp+1Fh] [rbp-89h]
  __int64 (__fastcall **v16)(); // [rsp+20h] [rbp-88h] BYREF
  int v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  __int128 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+48h] [rbp-60h]
  __int128 v21; // [rsp+50h] [rbp-58h]
  unsigned __int64 v22; // [rsp+68h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) )
    return 0;
  v3 = sub_280CF0(a2, 0);
  if ( (_BYTE)v3 )
    return 0;
  v17 = 0;
  v5 = 0;
  v16 = (__int64 (__fastcall **)())&off_4C14D0;
  v6 = *(_QWORD **)(a2 + 24);
  v18 = 0;
  v20 = 0;
  v7 = v6;
  v19 = 0;
  v21 = 0;
  if ( (_QWORD *)*v6 != v6 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)v7[1];
      v8 = sub_280810((__int64)(v7 + 2), a3);
      if ( v8 )
        break;
      if ( (v5 || !(unsigned __int8)sub_251DE0(a3))
        && !(unsigned int)sub_251200((__int64 *)&v16, (__int64)(v7 + 2), 0)
        && !(unsigned __int8)sub_2809B0((__int64)(v7 + 2))
        && ++v5 != 3
        && **(_QWORD ***)(a2 + 24) != v7 )
      {
        continue;
      }
      goto LABEL_12;
    }
    if ( *((_DWORD *)v7 + 6) == 72 )
    {
      v9 = v7[5];
      v15 = v8;
      if ( !(unsigned __int8)sub_2808E0(v9, 1, 1)
        && !(unsigned __int8)sub_2808E0(v9, 66, 1)
        && !(unsigned __int8)sub_2809B0(v9) )
      {
        v10 = v15;
        if ( v5 )
        {
          v11 = v7[5];
          v12 = *(_DWORD *)(v11 + 8);
          if ( (unsigned int)(v12 - 53) <= 3 )
          {
            v13 = sub_255220(*(_QWORD *)(v11 + 24), a3);
            v10 = v15;
            if ( v13 )
              goto LABEL_12;
          }
          else
          {
            if ( (unsigned int)(v12 - 2) > 0xD )
              goto LABEL_12;
            if ( sub_255220(*(_QWORD *)(v11 + 24), a3) )
              goto LABEL_12;
            v10 = v15;
            if ( *(_DWORD *)(*(_QWORD *)(v11 + 32) + 8LL) != 61 )
              goto LABEL_12;
          }
        }
        v3 = v10;
        *a1 = v7;
      }
    }
  }
LABEL_12:
  v16 = off_4BC478;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v3;
}

