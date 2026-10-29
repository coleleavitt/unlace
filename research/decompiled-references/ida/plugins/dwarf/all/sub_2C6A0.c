__int64 __fastcall sub_2C6A0(__int64 a1, __int64 a2, unsigned __int16 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned __int64 v9; // r14
  int v10; // eax
  int v11; // r13d
  int v12; // r14d
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rax
  int v17; // eax
  int v18; // r15d
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // r9d
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // ebp
  unsigned __int64 v29; // rsi
  int v30; // [rsp+8h] [rbp-130h]
  int v31; // [rsp+8h] [rbp-130h]
  int v33; // [rsp+10h] [rbp-128h]
  int v34; // [rsp+18h] [rbp-120h]
  unsigned __int16 v35; // [rsp+26h] [rbp-112h] BYREF
  __int64 v36; // [rsp+28h] [rbp-110h] BYREF
  __int64 v37; // [rsp+30h] [rbp-108h] BYREF
  __int64 v38; // [rsp+38h] [rbp-100h] BYREF
  __int128 v39; // [rsp+40h] [rbp-F8h] BYREF
  void (__fastcall __noreturn **v40)(); // [rsp+50h] [rbp-E8h] BYREF
  int v41; // [rsp+58h] [rbp-E0h]
  _QWORD v42[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+70h] [rbp-C8h]
  _QWORD v44[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+98h] [rbp-A0h]
  _OWORD v47[4]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v48; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v49; // [rsp+F8h] [rbp-40h]

  v4 = a3;
  v49 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(v5 + 88);
  LODWORD(v44[0]) = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD *, _OWORD *))(v6 + 112))(a2, a3, v44, v47)
    && LODWORD(v44[0]) )
  {
    v9 = *(_QWORD *)(v5 + 88);
    v36 = 0;
    if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v9 + 88))(a2, v4, &v37, &v36) )
    {
      if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(v9 + 200))(v37, &v35, &v36) )
      {
        (*(void (__fastcall **)(_QWORD, _OWORD *))(v9 + 544))(v4, v47);
        if ( (debug & 0x400000) != 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64))(v9 + 464))(v36);
          v18 = v47[0];
          v30 = v17;
          v19 = sub_28270(a1, a2, 0);
          v20 = sub_817F0(
                  v19 & 0x7FFFFFFFFFFFFFFFLL,
                  *(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL,
                  *(unsigned int *)(a1 + 160));
          sub_88B80(
            (unsigned int)"Error DIE %s retrieving integer attribute format %s (0x%x) : %s\n",
            v20,
            v18,
            v4,
            v30,
            v21);
        }
        goto LABEL_9;
      }
      if ( v35 <= 0x21u )
      {
        v16 = 1LL << v35;
        if ( ((1LL << v35) & 0x1000618) != 0 )
        {
          v39 = 0;
          *a4 = 0;
          sub_944F0(&v39, v5, a2, v4);
          sub_89A30(v42, v9, &v39);
          v28 = v43;
          v29 = (unsigned int)v43;
          if ( (_DWORD)v43 == 1 )
            goto LABEL_28;
          if ( (debug & 0x400000) != 0 )
            sub_88B80((unsigned int)"Unexpected multi-locdesc attribute for data offset: %d", v43, v24, v25, v26, v27);
          if ( v28 )
          {
LABEL_28:
            v29 = (unsigned __int64)v47;
            v48 = 0;
            memset(v47, 0, sizeof(v47));
            v7 = 1;
            if ( (unsigned __int8)sub_874F0(v42, v47, 0) )
            {
              v44[0] = v5;
              v44[1] = v47;
              v45 = 0;
              v46 = 0;
              v45 = qvector_reserve(&v45, 0, 1, 8);
              v29 = v9;
              *(_QWORD *)(v45 + 8 * v46) = 0;
              *(_QWORD *)&v46 = v46 + 1;
              v41 = 0;
              v40 = &off_C7258;
              v7 = sub_89AD0(v44, v9, &v38, &v40);
              if ( (_BYTE)v7 )
                *a4 = v38;
              if ( v45 )
              {
                *(_QWORD *)&v46 = 0;
                qfree(v45);
              }
            }
          }
          else
          {
            v7 = 1;
          }
          sub_85110(v42, v29);
          sub_84A10(&v39);
          goto LABEL_10;
        }
        if ( (v16 & 0x88E0) != 0 )
        {
          if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD *, __int64 *))(v9 + 264))(v37, v42, &v36) )
            goto LABEL_18;
          goto LABEL_20;
        }
        if ( (v16 & 0x200002000LL) != 0 )
        {
          if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD *, __int64 *))(v9 + 272))(v37, v42, &v36) )
          {
LABEL_18:
            v7 = 1;
            *a4 = v42[0];
            goto LABEL_10;
          }
LABEL_20:
          (*(void (__fastcall **)(_QWORD, _QWORD *))(v9 + 544))(v4, v44);
          (*(void (__fastcall **)(_QWORD, _OWORD *))(v9 + 536))(v35, v47);
          if ( (debug & 0x400000) != 0 )
          {
            (*(void (__fastcall **)(__int64))(v9 + 464))(v36);
            v34 = v44[0];
            v33 = v35;
            v31 = v47[0];
            v22 = sub_28270(a1, a2, 0);
            v23 = sub_817F0(
                    v22 & 0x7FFFFFFFFFFFFFFFLL,
                    *(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL,
                    *(unsigned int *)(a1 + 160));
            sub_88B80(
              (unsigned int)"Error DIE %s retrieving integer attribute value %s (0x%x)/%s (0x%x): %s\n",
              v23,
              v31,
              v33,
              v34,
              v4);
          }
        }
      }
LABEL_9:
      v7 = 0;
LABEL_10:
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v9 + 480))(*(_QWORD *)(v5 + 160), v37, 10);
      return v7;
    }
    (*(void (__fastcall **)(_QWORD, _OWORD *))(v9 + 544))(v4, v47);
    if ( (debug & 0x400000) != 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(v9 + 464))(v36);
      v11 = v47[0];
      v12 = v10;
      v13 = sub_28270(a1, a2, 0);
      v14 = sub_817F0(
              v13 & 0x7FFFFFFFFFFFFFFFLL,
              *(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL,
              *(unsigned int *)(a1 + 160));
      sub_88B80((unsigned int)"Error DIE %s retrieving integer attribute %s (0x%x) : %s\n", v14, v11, v4, v12, v15);
    }
  }
  return 0;
}

