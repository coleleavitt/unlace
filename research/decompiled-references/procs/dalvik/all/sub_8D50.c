__int64 __fastcall sub_8D50(_QWORD *a1, __int64 *a2)
{
  int v3; // edx
  __int64 v4; // r12
  __int64 *v5; // rbp
  void (__fastcall *v7)(_QWORD *, __int64 *, __int64); // rax
  __int64 v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rdi
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx
  const char *v19; // rdx
  __int64 (__fastcall *v20)(_QWORD *, char); // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  const char *v23; // rsi
  __int64 (__fastcall *v24)(_QWORD *, char); // rax
  __int64 (__fastcall *v25)(_QWORD *, char); // rax
  __int64 v26; // r12
  unsigned __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rbp
  unsigned __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v36; // r13
  unsigned int v37; // eax
  char v38; // dl
  __int64 v39; // rax
  void (__fastcall *v40)(_QWORD *, __int64 *, _QWORD); // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // dl
  __int64 v46; // rax
  void (__fastcall *v47)(_QWORD *, __int64 *, _QWORD); // rax
  __int64 v48; // rsi
  __int64 v49; // r12
  unsigned int v50; // r13d
  unsigned int v51; // eax
  char v52; // dl
  __int64 v53; // rax
  void (__fastcall *v54)(_QWORD *, __int64 *, _QWORD); // rax
  const char *v55; // rdi
  __int64 v56; // r14
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  const char *v59; // rdx
  __int64 v60; // rax
  const char *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  struct _Unwind_Exception *v64; // rbx
  __int64 v65; // [rsp+0h] [rbp-198h] BYREF
  __int128 v66; // [rsp+8h] [rbp-190h]
  const char *v67; // [rsp+20h] [rbp-178h] BYREF
  __int128 v68; // [rsp+28h] [rbp-170h]
  _BYTE v69[208]; // [rsp+40h] [rbp-158h] BYREF
  _BYTE v70[72]; // [rsp+110h] [rbp-88h] BYREF
  unsigned __int64 v71; // [rsp+158h] [rbp-40h]

  v3 = *((unsigned __int8 *)a2 + 1);
  v4 = a1[77];
  v71 = __readfsqword(0x28u);
  v5 = a2;
  switch ( (char)v3 )
  {
    case 1:
      qsnprintf(v70, 64, "v%d", *((unsigned __int16 *)a2 + 3) - 2);
      (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v70, 33);
      if ( *((_BYTE *)a2 + 32) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
        qsnprintf(v70, 64, "v%d", *((unsigned __int16 *)a2 + 3) - 1);
        (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v70, 33);
      }
      return 1;
    case 5:
      v7 = *(void (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 24LL);
      if ( *((_BYTE *)a2 + 5) == 7 )
        v7(a1, a2, 80);
      else
        v7(a1, a2, 68);
      return 1;
    case 7:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 120LL))(a1, a2, a2[2], -1) )
      {
        sub_80D0((__int64)a1, a2[2]);
        remember_problem(2, a1[30], 0);
      }
      return 1;
    case 9:
      v8 = a2[2];
      if ( v8 == -1 )
        sub_8CB0((__int64)a1, (__int64)a2, "string_id");
      else
        (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 120LL))(a1, a2, v8, -1);
      return 1;
    case 10:
      v9 = (const char *)a1[30];
      v10 = v4 + 120;
      v11 = *((_DWORD *)v5 + 2);
      v65 = 0;
      v66 = 0;
      v12 = (unsigned int)sub_C5C0(v4 + 120, v9) - 1;
      if ( v12 < *(_QWORD *)(v4 + 176) )
      {
        if ( (unsigned __int8)sub_C8C0(&v65, *(_QWORD *)(*(_QWORD *)(v4 + 168) + 8 * v12), v11, 85) )
        {
          sub_C1C0((unsigned int)&v67, (unsigned int)&v65, v14, v15, v16, v17, v65, v66, *((__int64 *)&v66 + 1));
          v59 = (const char *)&unk_150C8;
          if ( (_QWORD)v68 )
            v59 = v67;
          v23 = "<t: %s>";
          sub_7FF0((__int64)a1, (__int64)"<t: %s>", v59);
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree(v67, "<t: %s>", v19);
          }
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 56LL))(a1, "<t: ", 0);
          sub_80D0((__int64)a1, v5[1]);
          v19 = (const char *)sub_7F70;
          v20 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v20 == sub_7F70 )
          {
            v21 = a1[4];
            v22 = 2;
            if ( v21 )
              v22 = v21-- + 1;
            v23 = (const char *)a1[3];
            if ( a1[5] < v22 )
            {
              v62 = qvector_reserve(a1 + 3, v23, v22, 1);
              a1[3] = v62;
              v23 = (const char *)v62;
            }
            a1[4] = v22;
            v23[v21] = 62;
            *(_BYTE *)(a1[3] + v21 + 1) = 0;
          }
          else
          {
            v23 = (const char *)&word_3E;
            v20(a1, 62);
          }
        }
        if ( v65 )
        {
          *(_QWORD *)&v66 = 0;
          qfree(v65, v23, v19, v18);
        }
        return 1;
      }
      sub_7F50(v10, v9, v13);
      goto LABEL_81;
    case 11:
      if ( !*((_BYTE *)a2 + 32) )
      {
        sub_89D0(a1, (__int64)a2, a2[2]);
        return 1;
      }
      sub_7FF0((__int64)a1, (__int64)"[obj+");
      (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      v24 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v24 == sub_7F70 )
        goto LABEL_33;
      goto LABEL_24;
    case 12:
      if ( *((_BYTE *)a2 + 32) )
      {
        v25 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v25 == sub_7F70 )
        {
          v26 = a1[4];
          if ( v26 )
          {
            v27 = v26 + 1;
            v28 = a1[4];
            --v26;
          }
          else
          {
            v28 = 1;
            v27 = 2;
          }
          v29 = a1[3];
          if ( a1[5] < v27 )
          {
            v63 = qvector_reserve(a1 + 3, v29, v27, 1);
            a1[3] = v63;
            v29 = v63;
          }
          a1[4] = v27;
          *(_BYTE *)(v29 + v26) = 91;
          *(_BYTE *)(a1[3] + v28) = 0;
        }
        else
        {
          v25(a1, 91);
        }
        (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(*a1 + 24LL))(a1, v5, 0);
        v24 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v24 == sub_7F70 )
        {
LABEL_33:
          v30 = a1[4];
          if ( v30 )
          {
            v31 = v30 + 1;
            v32 = a1[4];
            --v30;
          }
          else
          {
            v32 = 1;
            v31 = 2;
          }
          v33 = a1[3];
          if ( a1[5] < v31 )
          {
            v60 = qvector_reserve(a1 + 3, v33, v31, 1);
            a1[3] = v60;
            v33 = v60;
          }
          a1[4] = v31;
          *(_BYTE *)(v33 + v30) = 93;
          *(_BYTE *)(a1[3] + v32) = 0;
        }
        else
        {
LABEL_24:
          v24(a1, 93);
        }
      }
      else
      {
        v56 = a2[1];
        v9 = (const char *)a1[30];
        memset(v69, 0, 0xC8u);
        v10 = v4 + 120;
        v57 = (unsigned int)sub_C5C0(v4 + 120, v9) - 1;
        if ( v57 >= *(_QWORD *)(v4 + 176) )
        {
LABEL_81:
          v64 = (struct _Unwind_Exception *)sub_7F50(v10, v9, v58);
          if ( v65 )
          {
            *(_QWORD *)&v66 = 0;
            qfree(v65, v9);
          }
          _Unwind_Resume(v64);
        }
        if ( netnode_supval(*(_QWORD *)(*(_QWORD *)(v4 + 168) + 8 * v57), (unsigned int)v56, v69, 200, 77) > 199 )
        {
          v67 = nullptr;
          v68 = 0;
          sub_D240(v4 + 120, &v67, v69);
          v61 = (const char *)&unk_150C8;
          if ( (_QWORD)v68 )
            v61 = v67;
          sub_7FF0((__int64)a1, (__int64)"<%s ", v61);
          if ( (v69[0] & 2) != 0 )
          {
            (*(void (__fastcall **)(_QWORD *, __int64 *, __int64, __int64))(*a1 + 120LL))(a1, v5, v5[2], -1);
          }
          else
          {
            sub_7FF0((__int64)a1, (__int64)"imp. @ ");
            sub_89D0(a1, (__int64)v5, v5[3]);
          }
          sub_7FF0((__int64)a1, (__int64)">");
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree(v67, ">");
          }
        }
        else
        {
          sub_7FF0((__int64)a1, (__int64)"<unknown method>");
        }
      }
      return 1;
    case 13:
      v34 = a1[30];
      v35 = v4 + 120;
      v67 = nullptr;
      v36 = v5[1];
      v68 = 0;
      v37 = sub_C5C0(v35, v34);
      v38 = sub_E410(v35, &v67, v37, (unsigned __int16)v36);
      v39 = *a1;
      if ( v38 )
      {
        v40 = *(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v39 + 56);
        a2 = (__int64 *)&unk_150C8;
        if ( (_QWORD)v68 )
          a2 = (__int64 *)v67;
        v40(a1, a2, 0);
      }
      else
      {
        a2 = v5;
        (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v39 + 24))(a1, v5, 0);
      }
      v55 = v67;
      if ( v67 )
        goto LABEL_59;
      return 1;
    case 14:
      v43 = a1[30];
      v44 = *((unsigned int *)a2 + 2);
      v68 = 0;
      v67 = nullptr;
      v45 = sub_EAA0(v4 + 120, &v67, v43, v44);
      v46 = *a1;
      if ( v45 )
      {
        v47 = *(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v46 + 56);
        a2 = (__int64 *)&unk_150C8;
        if ( (_QWORD)v68 )
          a2 = (__int64 *)v67;
        v47(a1, a2, 0);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v46 + 24))(a1, a2, 0);
      }
      v55 = v67;
      if ( v67 )
        goto LABEL_59;
      return 1;
    case 15:
      v48 = a1[30];
      v49 = v4 + 120;
      v67 = nullptr;
      v50 = *((_DWORD *)v5 + 2);
      v68 = 0;
      v51 = sub_C5C0(v49, v48);
      v52 = sub_E890(v49, &v67, v51, v50);
      v53 = *a1;
      if ( v52 )
      {
        v54 = *(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v53 + 56);
        a2 = (__int64 *)&unk_150C8;
        if ( (_QWORD)v68 )
          a2 = (__int64 *)v67;
        v54(a1, a2, 0);
      }
      else
      {
        a2 = v5;
        (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD))(v53 + 24))(a1, v5, 0);
      }
      v55 = v67;
      if ( v67 )
      {
LABEL_59:
        *(_QWORD *)&v68 = 0;
        qfree(v55, (const char *)a2, v41, v42);
      }
      return 1;
    default:
      sub_7FF0((__int64)a1, (__int64)" [%d=%s 0x%x]", v3, "unknown", *((_DWORD *)a2 + 2));
      return 1;
  }
}
