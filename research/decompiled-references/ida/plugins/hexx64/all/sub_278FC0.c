__int64 __fastcall sub_278FC0(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  int tinfo_size; // eax
  int v13; // esi
  _DWORD *v14; // rbx
  _DWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  int *v18; // r13
  int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned __int64 *v22; // rdi
  unsigned int v23; // ebx
  _QWORD *v25; // r12
  __int64 v26; // rdx
  int *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // [rsp+0h] [rbp-C8h]
  int *dest; // [rsp+28h] [rbp-A0h]
  __int64 v37[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v38; // [rsp+40h] [rbp-88h] BYREF
  __int128 v39; // [rsp+48h] [rbp-80h]
  __int64 v40[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 *v41; // [rsp+70h] [rbp-58h] BYREF
  __int128 v42; // [rsp+78h] [rbp-50h]
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  v10 = *(_QWORD *)a4;
  v43 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v10 + 432) + 104LL * a4[2];
  v31 = v11;
  tinfo_size = get_tinfo_size();
  if ( (*(_BYTE *)(v11 + 25) & 1) != 0 )
  {
    v13 = tinfo_size;
    if ( *(_DWORD *)(v11 + 88) != tinfo_size )
    {
      if ( *(_DWORD *)(v11 + 88) > tinfo_size )
        return 0;
      v14 = *(_DWORD **)(*(_QWORD *)a4 + 456LL);
      v15 = &v14[*(_QWORD *)(*(_QWORD *)a4 + 464LL)];
      if ( v14 == v15 )
        goto LABEL_41;
      while ( a4[2] != *v14 )
      {
        if ( v15 == ++v14 )
          goto LABEL_41;
      }
      if ( v15 == v14 )
      {
LABEL_41:
        if ( !under_debugger )
          sub_383060(0xCB41u, a7);
        BUG();
      }
      v16 = *(_QWORD *)(*(_QWORD *)a4 + 1440LL);
      v37[0] = 0;
      v37[1] = 0;
      v38 = 0;
      v39 = 0;
      sub_1C31B0(v31, (__int64)v37, v13, v16, 0, 0.0, a8);
      v17 = *(_QWORD *)a4;
      dest = v14 + 1;
      v18 = (int *)(*(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL));
      if ( v14 + 1 == v18 )
      {
LABEL_28:
        v23 = sub_278EB0(a1, a2, a3, v31, a5, a6, 0.0);
        if ( (_BYTE)v23 )
        {
          v25 = *(_QWORD **)a4;
          v26 = *(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL);
          if ( dest != (int *)v26 )
          {
            if ( dest != v18 )
            {
              v27 = dest;
              do
              {
                v28 = *v27++;
                v29 = v25[54] + 104 * v28;
                LODWORD(v28) = *(_DWORD *)(v29 + 24);
                BYTE1(v28) &= 0x7Eu;
                *(_DWORD *)(v29 + 24) = v28 | 0x100000;
                v25 = *(_QWORD **)a4;
              }
              while ( v27 != v18 );
              v26 = v25[57] + 4LL * v25[58];
            }
            memmove(dest, v18, v26 - (_QWORD)v18);
            v25[58] -= v18 - dest;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v19 = v14 + 1;
        while ( 1 )
        {
          v20 = *v19;
          v40[0] = 0;
          v40[1] = 0;
          v42 = 0;
          v41 = nullptr;
          v21 = *(_QWORD *)(v17 + 432) + 104 * v20;
          sub_1C3380(v21, v17, (__int64)v40, 0, 0.0, (__m128)0LL);
          if ( !(unsigned __int8)sub_64780(v40, v37) && !(unsigned __int8)sub_318470(&v41, (__int64)&v38) )
          {
            if ( v41 )
            {
              *(_QWORD *)&v42 = 0;
              qfree((__int64)v41);
            }
            v18 = v19;
            qfree(v40[0]);
            goto LABEL_28;
          }
          if ( (*(_BYTE *)(v21 + 26) & 8) == 0 || !(unsigned __int8)sub_64820(v40, v37) )
            break;
          v30 = sub_317F40(&v38, (__int64)&v41);
          v22 = v41;
          if ( !v30 )
            goto LABEL_15;
          if ( v41 )
          {
            *(_QWORD *)&v42 = 0;
            qfree((__int64)v41);
          }
          ++v19;
          qfree(v40[0]);
          v17 = *(_QWORD *)a4;
          v18 = (int *)(*(_QWORD *)(*(_QWORD *)a4 + 456LL) + 4LL * *(_QWORD *)(*(_QWORD *)a4 + 464LL));
          if ( v19 == v18 )
            goto LABEL_28;
        }
        v22 = v41;
LABEL_15:
        if ( v22 )
        {
          *(_QWORD *)&v42 = 0;
          qfree((__int64)v22);
        }
        qfree(v40[0]);
      }
      v23 = 0;
LABEL_19:
      if ( v38 )
      {
        *(_QWORD *)&v39 = 0;
        qfree(v38);
      }
      qfree(v37[0]);
      return v23;
    }
  }
  return sub_278EB0(a1, a2, a3, v11, a5, a6, a7);
}

