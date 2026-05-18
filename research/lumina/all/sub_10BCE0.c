__int64 __fastcall sub_10BCE0(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __off_t v12; // r13
  __off_t v13; // rbx
  __int64 st_blksize_low; // rbp
  __int64 v15; // r12
  __off64_t v16; // r15
  unsigned __int16 v17; // ax
  __int16 v18; // ax
  unsigned __int16 v19; // ax
  __int16 v20; // ax
  int v21; // r12d
  __int64 v22; // rax
  bool v23; // cc
  void *v24; // rdi
  int v25; // ecx
  int v26; // eax
  _BOOL4 v27; // edx
  const char *v28; // r12
  int *v29; // rax
  char *v30; // rdx
  __int16 v31; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v32[22]; // [rsp+12h] [rbp-F6h]
  __int16 v33; // [rsp+28h] [rbp-E0h]
  int v34; // [rsp+2Ah] [rbp-DEh]
  __int16 v35; // [rsp+2Eh] [rbp-DAh]
  struct stat64 stat_buf; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 1u:
      v8 = 0;
      *a3 = *(unsigned __int8 *)(a1 + 28);
      return v8;
    case 4u:
      v8 = 0;
      *a3 = *(_DWORD *)(a1 + 32);
      return v8;
    case 5u:
      v12 = *(_QWORD *)a3;
      if ( *(int *)(a1 + 72) <= 0 )
        goto LABEL_52;
      v8 = 1802;
      if ( !(unsigned int)off_2411E0(*(_DWORD *)(a1 + 24), &stat_buf) )
      {
        v13 = *(int *)(a1 + 72) * ((v12 + *(int *)(a1 + 72) - 1) / *(int *)(a1 + 72));
        if ( v13 <= stat_buf.st_size
          || (st_blksize_low = SLODWORD(stat_buf.st_blksize),
              v15 = v13 + SLODWORD(stat_buf.st_blksize) - 1,
              v16 = SLODWORD(stat_buf.st_blksize) * (stat_buf.st_size / SLODWORD(stat_buf.st_blksize) + 1) - 1,
              v16 >= v15) )
        {
LABEL_52:
          if ( *(__int64 *)(a1 + 96) <= 0 || v12 <= *(_QWORD *)(a1 + 80) )
            return 0;
          if ( *(int *)(a1 + 72) <= 0 && (unsigned int)sub_C77F0(*(_DWORD *)(a1 + 24), v12) )
          {
            v29 = __errno_location();
            v30 = *(char **)(a1 + 56);
            *(_DWORD *)(a1 + 32) = *v29;
            return (unsigned int)sub_EABB0(0x60Au, (__int64)"ftruncate", v30, 0x994Cu);
          }
          else
          {
            if ( *(int *)(a1 + 76) > 0 )
              return 0;
            return (unsigned int)sub_EAC10(a1, v12);
          }
        }
        else
        {
          while ( 1 )
          {
            if ( v16 >= v13 )
              v16 = v13 - 1;
            if ( (unsigned int)sub_D5600(*(_DWORD *)(a1 + 24), v16, "", 1, (int *)(a1 + 32)) != 1 )
              return 778;
            v16 += st_blksize_low;
            if ( v16 >= v15 )
              goto LABEL_52;
          }
        }
      }
      return v8;
    case 6u:
      v8 = 0;
      *(_DWORD *)(a1 + 72) = *a3;
      return v8;
    case 0xAu:
      v8 = *a3;
      v17 = *(_WORD *)(a1 + 30);
      if ( (*a3 & 0x80000000) != 0 )
      {
        v8 = 0;
        *a3 = (v17 >> 2) & 1;
      }
      else
      {
        if ( v8 )
        {
          v18 = v17 | 4;
          v8 = 0;
        }
        else
        {
          v18 = v17 & 0xFFFB;
        }
        *(_WORD *)(a1 + 30) = v18;
      }
      return v8;
    case 0xCu:
      v8 = 0;
      *(_QWORD *)a3 = sub_105970("%s", *(const char **)(*(_QWORD *)(a1 + 8) + 24LL));
      return v8;
    case 0xDu:
      v8 = *a3;
      v19 = *(_WORD *)(a1 + 30);
      if ( (*a3 & 0x80000000) != 0 )
      {
        v8 = 0;
        *a3 = (v19 >> 4) & 1;
      }
      else
      {
        if ( v8 )
        {
          v20 = v19 | 0x10;
          v8 = 0;
        }
        else
        {
          v20 = v19 & 0xFFEF;
        }
        *(_WORD *)(a1 + 30) = v20;
      }
      return v8;
    case 0x10u:
      v21 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
      v8 = sub_FEBD0(a1, a2);
      if ( v8 )
        return 0;
      v28 = (const char *)sub_D1E10(v21, a2);
      if ( !v28 )
        return 0;
      sub_10BB80(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL), v28);
      *(_QWORD *)a3 = v28;
      return v8;
    case 0x12u:
      v22 = *(_QWORD *)a3;
      if ( qword_2415B0 <= *(_QWORD *)a3 )
        v22 = qword_2415B0;
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 96);
      if ( v22 < 0 )
        return 0;
      if ( *(_QWORD *)(a1 + 96) == v22 )
        return 0;
      if ( *(_DWORD *)(a1 + 76) )
        return 0;
      v23 = *(_QWORD *)(a1 + 80) <= 0LL;
      *(_QWORD *)(a1 + 96) = v22;
      if ( v23 )
        return 0;
      v24 = *(void **)(a1 + 104);
      if ( v24 )
      {
        off_241390(v24, *(_QWORD *)(a1 + 88));
        v25 = *(_DWORD *)(a1 + 76);
        *(_QWORD *)(a1 + 104) = 0;
        *(_QWORD *)(a1 + 80) = 0;
        *(_QWORD *)(a1 + 88) = 0;
        if ( v25 > 0 )
          return 0;
      }
      return (unsigned int)sub_EAC10(a1, -1);
    case 0x14u:
      if ( *(_QWORD *)(a1 + 16) )
      {
        v26 = off_2411C8(*(char **)(a1 + 56), &stat_buf);
        v27 = 1;
        if ( !v26 )
          v27 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) != stat_buf.st_ino;
      }
      else
      {
        v27 = 0;
      }
      *a3 = v27;
      return 0;
    case 0x28u:
      *a3 = 0;
      v5 = *(__int64 **)(a1 + 64);
      if ( v5 )
      {
        v6 = *v5;
        v31 = 1;
        *(_QWORD *)v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        *(_QWORD *)&v32[6] = 123;
        *(_QWORD *)&v32[14] = 5;
        v7 = *(_QWORD *)(v6 + 8);
        if ( v7 )
          xmmword_241500(v7);
        v8 = 3850;
        if ( off_241210(*(_DWORD *)(v6 + 24), 5, &v31) >= 0 )
        {
          v8 = 0;
          *a3 = v31 != 2;
        }
        v10 = *(_QWORD *)(v6 + 8);
        if ( v10 )
          xmmword_241510(v10, 5, v9);
      }
      else
      {
        return 0;
      }
      return v8;
    default:
      return 12;
  }
}
