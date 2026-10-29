unsigned __int64 __fastcall sub_160120(_DWORD *a1, double a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // r14d
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned __int8 *v12; // r12
  int v13; // ebp
  __int64 v14; // r15
  unsigned __int8 *v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int16 v21; // ax
  int v22; // ecx
  __int64 v23; // r8
  _QWORD *i; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  _QWORD *j; // rax
  const char *v30; // r8
  _QWORD *v31; // rsi
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rcx
  char v45; // si
  int v46; // [rsp+Ch] [rbp-1DCh]
  _BYTE v47[336]; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v48; // [rsp+160h] [rbp-88h]
  _QWORD *v49; // [rsp+1A0h] [rbp-48h]
  unsigned __int64 v50; // [rsp+1A8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v7 = sub_CD0F0(*(char ***)a4);
  v12 = (unsigned __int8 *)sub_D9DB0(*(_QWORD *)(a4 + 8), 1u, a2, v8, v9, v10, v11);
  v13 = sub_CD0F0(*(char ***)(a4 + 16));
  v14 = *(_QWORD *)(v6 + 496);
  v15 = *(unsigned __int8 **)(*(_QWORD *)(v6 + 32) + 32LL * v7);
  *(_QWORD *)(v6 + 496) = 0;
  v16 = sub_15FC20((__int64)v47, v15, v6, v12, v7 == 1);
  if ( v16 )
  {
    v46 = v16;
    sub_11EA20((__int64)v47, (__int64)v15, v17, v18, v19, v20);
    v38 = v46;
    *(_QWORD *)(v6 + 496) = v14;
  }
  else
  {
    if ( v48 )
    {
      v21 = *(_WORD *)(v48 + 54);
      if ( v21 != 1 )
      {
        v22 = v21;
        if ( v21 > v13 )
        {
          v23 = *(_QWORD *)(v48 + 8);
          i = nullptr;
          v25 = 16LL * v13;
          v26 = *(_QWORD *)(v23 + v25);
          if ( v26 )
          {
            for ( i = v49; i; i = (_QWORD *)i[3] )
            {
              if ( v26 == *i )
                break;
            }
          }
          v27 = (_BYTE *)i[1];
          if ( v22 - 1 <= v13 )
          {
            v30 = (const char *)&v12[*(int *)(v48 + 64)];
            if ( *v27 && *v27 != 44 )
            {
              v44 = v27 - 1;
              do
              {
                i[1] = v44;
                v45 = *v44;
                LODWORD(v27) = (_DWORD)v44--;
              }
              while ( v45 && v45 != 44 );
            }
          }
          else
          {
            v28 = *(_QWORD *)(v23 + v25 + 16);
            j = nullptr;
            if ( v28 )
            {
              for ( j = v49; j; j = (_QWORD *)j[3] )
              {
                if ( v28 == *j )
                  break;
              }
            }
            v30 = (const char *)j[1];
          }
          v31 = (_QWORD *)sub_E8280(v6, "%.*s%s", (int)v27 - (int)v12, (const char *)v12, v30);
          sub_F48B0((__int64)a1, v31, -1, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, v32);
          sub_C91C0((__int64)v31, (__int64)v31);
          sub_11EA20((__int64)v47, (__int64)v31, v33, v34, v35, v36);
          *(_QWORD *)(v6 + 496) = v14;
          return __readfsqword(0x28u) ^ v50;
        }
      }
    }
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      111830,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    sub_11EA20((__int64)v47, (__int64)"%s at line %d of [%.10s]", v40, v41, v42, v43);
    *(_QWORD *)(v6 + 496) = v14;
    v38 = 11;
  }
  v39 = *(_QWORD *)a1;
  a1[9] = v38;
  if ( (*(_BYTE *)(v39 + 20) & 1) != 0 )
    sub_F4FB0((__int64)a1, v38);
  return __readfsqword(0x28u) ^ v50;
}
